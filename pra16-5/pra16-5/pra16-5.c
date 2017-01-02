#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	char line[256];
	int m, n, i;
	FILE *filePtr;

	printf("Enter the m and n: ");
	scanf("%i %i", &m, &n);
	
	if ((filePtr = fopen("file1", "r")) == NULL)
	{
		printf("Can't open the file.\n");
		return 1;
	}

	while (feof(filePtr) == 0)
	{
		if ((fgets(line, 255, filePtr) != NULL))
			for (i = m; i <= n; i++)
			{
				if (line[i])
				{
					putc(line[i], stdout);
				}
				else
					break;
			}
		if (line[i] != '\n' && line[i] != '\0' && line[i] == EOF)
			putc('\n', stdout);
	}

	return 0;
}