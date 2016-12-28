#include <stdio.h>


int bit_test(unsigned int value, int n)
{
	if (n == 0)
		value = value >> 31 & 1;
	else
		value = value >> (n - 1) & 1;

	return value;
}

unsigned int bit_set(unsigned int value, int n)
{
	value = value | 1 << (n - 1);

	return value;
}

int main(void)
{
	int bit_test(unsigned int value, int n);
	unsigned int w1 = 0707, w2 = 0555;

	printf("%i\n", bit_test(w1, 0));
	printf("%o\n", bit_set(w2, 11));

	return 0;
}

