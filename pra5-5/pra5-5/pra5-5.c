//Factorial

#include <stdio.h>

int main(void)
{
	int n, i, factorial;	

	printf("The factorial of n\n\n");
	printf(" n           factorial\n");
	printf("---         -----------\n");

	for ( n = 1; n <= 10; ++n)
	{
		factorial = 1;
		for (i = n; i >= 1; --i) {
			factorial = factorial * i;
		}

		printf("%2i             %i\n", n, factorial);
	}

	return 0;
}