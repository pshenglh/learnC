#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

char result[80];

void removeString(char s[], int start, int number)
{
	
	int i, j;

	for (i = 0; i < start; i++)
		result[i] = s[i];
	j = i + number;
	while (s[j] != '\0') {
		result[i] = s[j];
		i++;
		j++;
	}
}

int main(void)
{
	char s[80];
	int start, number;
	void removeString(char s[], int start, int number);

	printf("Enter string,start and number: ");
	scanf("%s %i %i", s, &start, &number);

	removeString(s, start, number);

	printf("%s\n", result);
}