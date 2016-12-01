#include <stdio.h>

void uppercase(char s[])
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
}

int main(void)
{
	char s[20] = "weKSDew";
	void uppercase(char s[]);

	uppercase(s);

	printf("%s\n", s);

	return 0;
}