#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	int c;
	char inName[41], outName[41];
	FILE *in, *out;

	printf("Enter the file that copied: ");
	scanf("%40s", inName);

	printf("Enter the file that out: ");
	scanf("%40s", outName);

	if ((in = fopen(inName, "r")) == NULL)
	{
		printf("Can't open the in.\n");
		return 1;
	}

	if ((out = fopen(outName, "w")) == NULL)
	{
		printf("Can't open the out.\n");
		return 1;
	}

	while ((c = getc(in)) != EOF)
	{
		if (c >= 'a' && c <= 'z')
			c = c - 'a' + 'A';
		putc(c, out);
	}

	fclose(in);
	fclose(out);

	printf("File has been copied.\n");
	return 0;
}