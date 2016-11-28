#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

long int x_to_the_n(int x, int n)
{
	int i;
	long int result = 1;

	for (i = 0; i < n; i++) {
		result *= x;
	}

	return result;
}

int main(void)
{
	long int x_to_the_n(int x, int n);
	int x, n;

	printf("Enter x and n: ");
	scanf("%i %i", &x, &n);

	printf("The result is: %i\n", x_to_the_n(x, n));

	return 0;
}