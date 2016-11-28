//Program to convert a positive integer to another base

#include <stdio.h>

int main(void)
{
	const char baseDigits[16] = {
		'0', '1', '2', '3', '4', '5', '6', '7',
		'8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
	};
	int covertedNumber[64];
	long int numberToConvert;
	int nextDigit, base, index = 0;

	printf("Number to be coverted? ");
	scanf_s("%ld", &numberToConvert);
	printf("Base? ");
	scanf_s("%i", &base);

	do {
		covertedNumber[index] = numberToConvert % base;
		++index;
		numberToConvert = numberToConvert / base;
	} while (numberToConvert != 0);

	printf("Converted number = ");
	
	for (--index; index >= 0; --index) {
		nextDigit = covertedNumber[index];
		printf("%c", baseDigits[nextDigit]);
	}

	printf("\n");
	return 0;
}