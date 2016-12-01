#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int stringLenth(char string[])
{
	int i = 0;

	while (string[i] != '\0')
		++i;
	return i;
}

int findString(char beFinded[], char find[])
{
	int i =0, j = 0;
	int stringLenth(char string[]);

	while (i < stringLenth(find)) {
		if (find[0] == beFinded[j])
			for (i = 1; i < stringLenth(find); i++)
			{
				j++;
				if (find[i] != beFinded[j] || beFinded[j] == '\0') {
					j = j - i;
					i = 0;
					break;
				}
			}
		if (i == stringLenth(find) || j == stringLenth(beFinded))
			break;
		j++;
	}
			
	if (i == stringLenth(find))
		return (j - i + 1);
	else
		return -1;
}

int main(void)
{
	char s1[20], s2[20];
	int result;
	int findString(char beFinded[], char find[]);
	
	printf("Enter two strings: ");
	scanf("%s %s", s1, s2);

	result = findString(s1, s2);
	printf("%i\n", result);

	return 0;
}


