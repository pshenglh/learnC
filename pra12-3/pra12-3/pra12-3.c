#include <stdio.h>
#include <math.h>

unsigned int int_size(void)
{
	unsigned int a, b = 0;

	a = ~0;

	do {
		a /= 2;
		b += 1;
	} while (a != 0);
	

	return b;
}

int main(void)
{
	printf("%u\n", int_size());

	return 0;
}