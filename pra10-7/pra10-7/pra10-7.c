#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

char result[80];

int stringLenth(char s[])
{
	int i = 0;

	while (s[i] != '\0')
		++i;

	return i;
}

void insertString(char s1[], char s2[], int start)
{
	int i, j, k, l;
	int stringLenth(char s[]);

	for (i = 0; i < start; i++)
	{
		result[i] = s1[i];
	}
	
	for (j = 0; j < stringLenth(s2); j++)
		result[i + j] = s2[j];

	for (k = 0; k < stringLenth(s1) - start; k++)
		result[i + j + k] = s1[start + k];

}

int main(void)
{
	char inserted[80], insert[40];
	int startposition;
	void insertString(char s1[], char s2[], int start);
	
	printf("Enter two strings and start position: ");
	scanf("%s %s %i", inserted, insert, &startposition);

	insertString(inserted, insert, startposition);

	printf("%s\n", result);

	return 0; 
}
