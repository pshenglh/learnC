#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	char line[512], next = 'a';
	FILE *filePtr;
	int i;

	filePtr = fopen("file", "r");
	while (next != 'q')
	{
		for (i = 0; i < 20; i++)
		{
			fgets(line, 511, filePtr);
			fputs(line, stdout);
		}
		printf("Please enter 'q' to quit.\n");
		scanf("%c", &next);
	}

	fclose(filePtr);

	return 0;
}