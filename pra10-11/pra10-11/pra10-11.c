#include <stdio.h>

int strToInt(char s[])
{
	int i, value, start = 0, result = 0, fact = 1;

	if (s[0] == '-')
	{
		start = 1;
		fact = -1;
	}

	for (i = start; s[i] >= '0' && s[i] <= '9'; i++)
	{
		value = s[i] - '0';
		result = result * 10 + value;
	}

	return fact * result;
}

int main(void)
{
	int strToInt(char s[]);
	char s1[10] = "324235";
	char s2[10] = "-234435";

	printf("%i\n", strToInt(s1));
	printf("%i\n", strToInt(s2) + 23);

	return 0;
}
