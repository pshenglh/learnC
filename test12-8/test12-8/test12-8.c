#include <stdio.h>

int main(void)
{
	unsigned int w = 0xffffffff, a, b;
	
	a = w >> 31;
	b = w >> 32;

	printf("%x\n%x\n", a, b);

	return 0;
}