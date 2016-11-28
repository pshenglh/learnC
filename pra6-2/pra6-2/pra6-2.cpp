#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("Please enter two numbers: \n");
	scanf("%i %i", &a, &b);

	c = a % b;
	if (c == 0)
		printf("Can be aliquot.\n");
	else
	{
		printf("Can't be aliquote.\n");
	}

	return 0;
}