#define MAX3(a,b,c) ( (a) > (b) ? ((a) > (c) ? (a) :(c)) : ((b) > (c) ? (b) : (c)))
#include <stdio.h>

int main(void)
{
	int a = 4, b = 10, c = 7;

	printf("%i\n", MAX3(a, b, c));

	return 0;
}