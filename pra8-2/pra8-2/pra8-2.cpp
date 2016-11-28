#include <stdio.h>

int calculateTriangularNumber(int n)
{
	int i, triangularNumber = 0;

	for (i = 1; i <= n; ++i)
		triangularNumber += i;

	return triangularNumber;
}

void getNumberOfTrianglesAndTriangularNumbers(void)
{
	int calculateTriangularNumber(int n);
	int number, counter, max_counter;

	printf("Enter triangles you want to caculate: ");
	scanf_s("%i", &max_counter);

	for (counter = 1; counter <= max_counter; ++counter) {
		printf("What triangular number do you want? ");
		scanf_s("%i", &number);

		printf("Triangular number %i is %i\n\n", number,
			calculateTriangularNumber(number));
	}
}

int main(void)
{
	int calculateTriangularNumber(int n);
	void getNumberOfTrianglesAndTriangularNumbers(void);

	getNumberOfTrianglesAndTriangularNumbers();

	return 0;
}