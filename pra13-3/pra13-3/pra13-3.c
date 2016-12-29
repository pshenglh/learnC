#define MIN(a,b) (((a) < (b)) ? (a) : (b) )
#include <stdio.h>

int main(void)
{
	int a = 23, b = 56;

	printf("%i\n", MIN(a, b));

	return 0;
}