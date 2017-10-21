
#include <stdio.h>
#include <string.h>

char* read_input()
{
	char buffer[10];
	gets(buffer);
	return strdup(buffer);
}

#pragma warning(disable:4700)

int main()
{
	int i;
	char* input = read_input();
	for (; i < 10; ++i) {
		putchar(input[i]);
	}
	return 0;
}