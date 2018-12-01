from argparse import ArgumentParser
import sys, os, subprocess, shutil
from multiprocessing import cpu_count

here = os.path.abspath(os.path.dirname(__file__))

local_platform = sys.platform.lower()
if local_platform.startswith('linux'):
    local_platform = 'Linux'
elif local_platform.startswith('darwin'):
    local_platform = 'Darwin'
elif local_platform.startswith('win'):
    local_platform = 'Windows'
else:
    raise EnvironmentError("Unknown platform {}".format(local_platform))

default_generator = 'Unix Makefiles' if (local_platform == 'Linux' or local_platform == 'Darwin') \
    else 'Visual Studio 15 2017 Win64'
    # else 'MinGW Makefiles'

# default_generator = 'Xcode'

parser = ArgumentParser()
parser.add_argument('--build-type', '-b', default='Debug', choices=['Debug', 'Release', 'RelWithDebInfo'])
parser.add_argument('--platform', '-p', default=local_platform, choices=['Windows', 'Linux', 'Darwin'])
parser.add_argument('--target', '-t', default='jemu', choices=['jemu', 'tests'])
parser.add_argument(
    '--generator',
    '-g',
    default=default_generator,
    choices=['Unix Makefiles', 'Xcode', 'Visual Studio 15 2017 Win64', 'MinGW Makefiles'],
    help='Ignored on cross compiling'
)

parser.add_argument('--jobs', '-j', default=cpu_count(), type=int)
parser.add_argument('--verbose', '-v', default=False, action='store_true')
args = parser.parse_args()

print('Build Type: {}'.format(args.build_type))
print('Platform: {}'.format(args.platform))
print('Target: {}'.format(args.target))
print('Generator: {}'.format(args.generator))
print('Jobs: {}'.format(args.jobs))

output_dir = os.path.join(here, '_output', args.build_type, "{}_{}".format(args.platform, args.generator))
print('Build Directory: "{}"'.format(output_dir))

cross_compiling = args.platform != local_platform
generator = args.generator
if cross_compiling:
    print('Cross compiling detected')
    generator = 'Unix Makefiles'
    print('Overriding generator with: {}'.format(generator))

if not os.path.exists(output_dir):
    os.makedirs(output_dir)

cmd = ['cmake', '-DCMAKE_BUILD_TYPE={}'.format(args.build_type)]

if (args.verbose):
    cmd.append('-DVERBOSE=1')

if cross_compiling:
    toolchain_file = os.path.join(here, '..', '..', 'Toolchain-Ubuntu-mingw64.cmake')
    print('Cross compiling with mingw, using toolchain file: "{}"'.format(toolchain_file))
    cmd.append('-DCMAKE_TOOLCHAIN_FILE={}'.format(toolchain_file))
else:
    cmd += ['-G', generator]

cmd.append(here)
print('Executing: "{}"'.format(' '.join(cmd)))
subprocess.check_call(cmd, cwd=output_dir)

cmd = None
if generator == 'Visual Studio 15 2017 Win64':
    cmd = ['msbuild.exe',
           'jemu.sln',
           '/m:{}'.format(cpu_count()),
           '/t:{}'.format(args.target),
           '/p:Platform=x64',
           '/p:Configuration={}'.format(args.build_type)
           ]
else:  # minGW
    cmd = ['mingw32-make'] if local_platform == 'Windows' else ['make']
    cmd += ['-j', str(args.jobs), args.target]

print('Executing: "{}"'.format(' '.join(cmd)))
subprocess.check_call(cmd, cwd=output_dir)

repo_base_path = os.path.join(here, '..', '..', '..', '..')
emulator_build_path = os.path.join(repo_base_path, 'jemu', 'emulator', '_build')
if not os.path.exists(emulator_build_path):
    os.makedirs(emulator_build_path)

sdk_path = os.path.join(repo_base_path, 'sdk')
target_name = '{}.exe'.format(args.target) if args.platform == 'Windows' else args.target
src_dir = os.path.join(output_dir, args.build_type) if generator == 'Visual Studio 15 2017 Win64' else output_dir
src_path = os.path.join(src_dir, target_name)
target_in_main_build_path = os.path.join(emulator_build_path, target_name)
shutil.copy(src_path, target_in_main_build_path)

jemu_dir_in_sdk = None
if args.target == 'jemu':
    jemu_dir_name_in_sdk = None
    if args.platform == 'Linux':
        jemu_dir_name_in_sdk = 'jemu-linux'
    elif args.platform == 'Darwin':
        jemu_dir_name_in_sdk = 'jemu-mac'
    elif args.platform == 'Windows':
        jemu_dir_name_in_sdk = 'jemu-windows'
    else:
        raise EnvironmentError("Unknown platform {}".format(args.platform))

    jemu_dir_in_sdk = os.path.join(sdk_path, 'jumper', 'jemu', jemu_dir_name_in_sdk)

    if not os.path.exists(jemu_dir_in_sdk):
        os.makedirs(jemu_dir_in_sdk)

    jemu_path_in_sdk = os.path.join(jemu_dir_in_sdk, target_name)
    shutil.copy(src_path, jemu_path_in_sdk)

''' OpenSSL dll '''
if local_platform == 'Windows':
    ssl_dll_path = os.path.join(here, '..', '3rd-party', 'openssl', 'bin', 'windows', 'ssleay32.dll')
    # print("**", src_dir, emulator_build_path, jemu_dir_in_sdk, ssl_dll_path)
    shutil.copy(ssl_dll_path, src_dir)
    shutil.copy(ssl_dll_path, emulator_build_path)
    if jemu_dir_in_sdk is not None:
        shutil.copy(ssl_dll_path, jemu_dir_in_sdk)

print('Run : python "{}"'.format(os.path.join(here, '..', '..', 'modeling-framework', 'build', 'build.py')))
subprocess.check_call(['python', os.path.join(here, '..', '..', 'modeling-framework', 'build', 'build.py')])
print('Run : python "{}"'.format(os.path.join(here, '..', 'test', 'peripheral-v1', 'build', 'build.py')))
subprocess.check_call(['python', os.path.join(here, '..', 'test', 'peripheral-v1', 'build', 'build.py')])
