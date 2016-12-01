#include <stdio.h>

char s[20], result[20];

void intToStr(int i)
{
	int digit, k = 0, j = 0;

	if (i < 0)
	{
		result[0] = '-';
		k = 1;
		i = -i;
	}

	while (i / 10 >= 0)
	{
		digit = i % 10 + '0';
		i = i / 10;
		s[j] = digit;
		j++;
		if (i < 1)
			break;
	}
	s[j] = '\0';
	j--;
	while (j >= 0)
	{
		result[k] = s[j];
		k++;
		j--;
	}
}

int main(void)
{
	int i = -345785;
	void intToStr(int i);

	intToStr(i);

	printf("%s\n", result);

	return 0;
}