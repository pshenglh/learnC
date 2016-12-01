#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdbool.h>

char text[80] = "the one example";

int stringLenth(char string[])
{
	int i = 0;

	while (string[i] != '\0')
		++i;
	return i;
}

int findString(char beFinded[], char find[])
{
	int i = 0, j = 0;
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

void removeString(char s[], int start, int number)
{

	int i, j;

	for (i = 0; i < start; i++)
		text[i] = s[i];
	j = i + number;
	while (s[j] != '\0') {
		text[i] = s[j];
		i++;
		j++;
	}
	text[i] = '\0';
}

void insertString(char s1[], char s2[], int start)
{
	int i, j, k, l;
	int stringLenth(char s[]);
	char result[80];

	for (i = 0; i < start; i++)
	{
		result[i] = s1[i];		
	}

	for (j = 0; j < stringLenth(s2); j++) {
		result[i + j] = s2[j];
	}

	for (k = 0; k < stringLenth(s1) - start; k++)
		result[i + j + k] = s1[start + k];
	result[i + j + k] = '\0';

	for (l = 0; l <= stringLenth(result); l++) {
		text[l] = result[l];
	}
}

bool replaceString(char source[], char bereplaced[], char replace[])
{
	int beplacedstart;
	int findString(char beFinded[], char find[]);
	void removeString(char s[], int start, int number);
	void insertString(char s1[], char s2[], int start);
	int stringLenth(char s[]);
	int i;

	
	beplacedstart = findString(source, bereplaced);
	if (beplacedstart == -1)
		return false;
	removeString(source, beplacedstart, stringLenth(bereplaced));
	insertString(text, replace, beplacedstart);

	return true;
}

int main(void)
{
	bool replaceString(char source[], char bereplaced[], char replace[]);
	
	char bereplaced[40] = " ";
	char replace[40] = "";
	bool stillFound;	
	
	do {		
		stillFound = replaceString(text, bereplaced, replace);
	} while (stillFound == true);

	printf("%s\n", text);

	return 0;
}