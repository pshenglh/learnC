#include <stdio.h>

int main(void)
{
	int a = 0, b = 1, c, i;

	printf("%i\n%i\n", a, b);
	
	for (i = 3; i <= 15; ++i) {
		c = a + b;
		printf("%i\n", c);
		a = b;
		b = c;
	}

	return 0;
}