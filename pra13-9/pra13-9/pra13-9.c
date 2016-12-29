#define ABSOLUTE_VALUE(x) (((x) > 0) ? x : (-(x)))
#include <stdio.h>

int main(void)
{
	printf("%i\n", ABSOLUTE_VALUE(3 - 10));

	return 0;
}