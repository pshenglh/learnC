#include <stdio.h>

int convertedNumber[64];
long int numberToCovert = 1;
int base;
int digit = 0;

void getNumberAndBase(void)
{	
	printf("Number to be coverted? ");
	scanf_s("%i", &numberToCovert);
	if (numberToCovert == 0)
		return;

	printf("Base? ");
	scanf_s("%i", &base);

	while (base < 2 || base > 16) {
		printf("Bad base - must be between 2 and 16\n");
		base = 0;
		printf("Base? ");
		scanf_s("%i", &base);
	}
}

void convertNumber(void)
{
	long int tempnumber;

	tempnumber = numberToCovert;
	digit = 0;
	do {
		convertedNumber[digit] = tempnumber % base;
		++digit;
		tempnumber /= base;
	} while (tempnumber != 0);
}

void displayCovertedNumber(void)
{
	const char baseDigits[16] =
	{ '0', '1', '2', '3', '4', '5', '6', '7',
	'8', '9', 'A', 'B', 'C', 'C', 'E', 'F' };
	int nextDigit;

	printf("Converted number = ");

	for (--digit; digit >= 0; --digit) {
		nextDigit = convertedNumber[digit];
		printf("%C", baseDigits[nextDigit]);
	}

	printf("\n");
}

int main(void)
{
	void getNumberAndBase(void), convertNumber(void),
		displayConvertedNumber(void);

	while (1) {
		getNumberAndBase();
		if (numberToCovert == 0)
			break;
		convertNumber();
		displayCovertedNumber();
	}

	return 0;
}