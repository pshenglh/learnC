#include <stdio.h>

int main(void)
{
	int n, number, triangularNumber, counter, max_counter;

	printf("Enter triangles you want to caculate: ");
	scanf_s("%i", &max_counter);

	for (counter = 1; counter <= max_counter; ++counter) {
		printf("What triangular number do you want? ");
		scanf_s("%i", &number);

		triangularNumber = 0;
		
		for (n = 1; n <= number; ++n)
			triangularNumber += n;

			printf("Triangular number %i is %i\n\n", number,
			triangularNumber);
			printf("%i", counter);		
	}

	return 0;
}