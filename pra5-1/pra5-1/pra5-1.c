//The squre of number 1-10

#include <stdio.h>

int main(void)
{
	printf("THE SQURE OF NUMBER 1-10\n");
	printf("number           squre\n");
	printf("------         ----------\n");

	int n, squre;

	for (n = 1; n <= 10; ++n) {
		squre = n * n;

		printf("%2i                %i\n", n, squre);
	}

	return 0;
}