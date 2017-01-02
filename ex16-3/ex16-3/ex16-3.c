#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	char inName[64], outName[64];
	FILE *in, *out;
	int c;

	printf("Enter name of file to be copied: ");
	scanf("%63s", inName);
	printf("Enter name of output file: ");
	scanf("%63s", outName);

	if ((in = fopen(inName, "r")) == NULL)
	{
		printf("Can't open %s for reading.\n", inName);
		return 1;
	}

	if ((out = fopen(outName, "w")) == NULL)
	{
		printf("Can't open %s for writting.\n", outName);
		return 2;
	}

	while ((c = getc(in)) != EOF)
		putc(c, out);

	fclose(in);
	fclose(out);

	printf("File has been copied.\n");
	return 0;
}