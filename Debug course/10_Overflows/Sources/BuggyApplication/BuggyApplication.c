#include "stdafx.h"

void ConvertStringToLowercase(void)
{
	int i;
	int len;
	char str[6];

	i = 0;

	printf("Enter string to convert: ");
	scanf("%s", str);

	len = strlen(str);
	while (i < len)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		++i;
	}

	printf("Converted string: %s\n", str);
}

char filename[256];

void ConvertFileToLowercase(void)
{
	FILE* fileptr;
	int filelen;
	int i;
	char buffer[256];

	i = 0;

	fileptr = fopen(filename, "rb");
	if (fileptr == NULL)
	{
		printf("Error opening input file %s\n", filename);
		exit(1);
	}
	fseek(fileptr, 0, SEEK_END);
	filelen = ftell(fileptr);
	fseek(fileptr, 0, SEEK_SET);

	fread(buffer, 1, filelen, fileptr);
	if (fileptr != NULL)
		fclose(fileptr);

	while (i < sizeof(buffer)/sizeof(buffer[0]))
	{
		if (buffer[i] >= 'A' && buffer[i] <= 'Z')
			buffer[i] += 32;
		++i;
	}

	printf("The output is: %s\n", buffer);
}

int main(int argc, char* argv[])
{
	int choice;
	
	if (argc > 1)
	{
		strcpy(filename, argv[1]);
		ConvertFileToLowercase();
		return 0;
	}

	printf("\n=== The Ultimate Lowercase Converter ===\n");
	printf("=== (C) example.com, 2011            ===\n\n");
	printf("1. Convert a string to lowercase\n");
	printf("2. Convert a file [FILE.TXT] to lowercase\n");
	printf("\nYour choice: ");
	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		ConvertStringToLowercase();
		break;
	case 2:
		strcpy(filename, "FILE.TXT");
		ConvertFileToLowercase();
		break;
	default:
		printf("You have selected an invalid option. Goodbye.\n");
	}

	return 0;
}

