#include <stdio.h>

int main(void)
{
	int n, sum = 0;

	printf("Enter your number: \n");
	scanf_s("%i", &n);
	
	while (n != 0) {
		sum += n % 10;
		n = n / 10;
	}
	printf("The sum of different position of n is: %i\n", sum);

	return 0;
}