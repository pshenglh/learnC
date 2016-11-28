#include <stdio.h>

int prime(int n)
{
	int i;
	for (i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 0;
		else
			return 1;
	return 1;
}

int main(void)
{
	int n;
	int prime(int n);

	printf("Enter a digite: ");
	scanf_s("%i", &n);

	printf("%i\n", prime(n));

	return 0;
}