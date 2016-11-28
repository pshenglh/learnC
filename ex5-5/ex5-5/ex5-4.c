#include <stdio.h>

int main(void)
{
	int n, number, trianglarNumber;

	printf("What triangular number do you want?");
	scanf_s("%i", &number);

	trianglarNumber = 0;

	for (n = 1; n <= number; ++n)
		trianglarNumber += n;
	printf("Triangular number %i is %i\n", number, trianglarNumber);

	return 0;
}