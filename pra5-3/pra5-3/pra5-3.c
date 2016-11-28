//Another method to caculate the triangularNumber

#include <stdio.h>

int main(void)
{
	int n, triangularNumber;

	printf("TABLE OF TRAANGULAR NUMBERS\n\n");
	printf(" n       sum from 1 to n\n");
	printf("---      -----------------\n");

	for (n = 5; n <= 50; n = n + 5) {
		triangularNumber = n * (n + 1) / 2;

		printf("%2i           %i\n", n, triangularNumber);
	}

	return 0;
}