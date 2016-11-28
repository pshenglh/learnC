#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

void substring(char source[], int start, int count, char result[])
{
	int i;
	
	for (i = 0; i < count; ++i)
		result[i] = source[start + i];

	result[i] = '\0';
}

int main(void)
{
	char source[20], result[20];
	int start, count;
	void substring(char source[], int start, int count, char result[]);
	
	printf("Enter char start and count: ");
	scanf("%20s %i %i", source, &start, &count);

	substring(source, start, count, result);

	printf("%s\n", result);

	return 0;
}