//Program to imoplent the sign function

#include <stdio.h>

int main(void)
{
	int number, sign;

	printf("Please type in a number: ");
	scanf_s("%i", &number);

	if (number < 0)
		sign = -1;
	else if (number == 0)
		sign = 0;
	else
		sign = 1;

	printf("Sing = %i\n", sign);

	return 0;
}