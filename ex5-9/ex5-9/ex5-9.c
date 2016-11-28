#include <stdio.h>

int main(void)
{
	int number, right_digit;

	printf("Ener your number.\n");
	scanf_s("%i", &number);

	
	if (number < 0) {
		number = -number;
		do {
			right_digit = number % 10;
			printf("%i", right_digit);
			number = number / 10;
			if (number == 0)
				printf("-");
		} while (number != 0);
	}
	else {
		do {
			number = number;
			right_digit = number % 10;
			printf("%i", right_digit);
			number = number / 10;
		} while (number != 0);
	} 
	

	printf("\n");

	return 0;
}