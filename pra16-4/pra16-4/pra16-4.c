#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	char inName1[61], inName2[61], line[301];
	FILE *fileptr1, *fileptr2;

	printf("Enter the first file: ");
	scanf("%60s", inName1);

	printf("Enter the second file: ");
	scanf("%60s", inName2);

	if ((fileptr1 = fopen(inName1, "r")) == NULL)
	{
		printf("Can't open file1\n");
		return 1;
	}
	if ((fileptr2 = fopen(inName2, "r")) == NULL)
	{
		printf("Can't open file2\n");
		return 1;
	}

	while ((feof(fileptr1) && feof(fileptr2)) == 0)
	{
		if (fgets(line, 300, fileptr1) != NULL)
			fputs(line, stdout);
		if (fgets(line, 300, fileptr2) != NULL)
			fputs(line, stdout);
	}

	fclose(fileptr1);
	fclose(fileptr2);

	return 0;
}