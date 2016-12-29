#define IS_UPPER_CASE(a) (((a) > 'A' && (a) < 'Z') ? (1) : 0)
#include <stdio.h>

int main(void)
{
	printf("%i\n", IS_UPPER_CASE('r'));
	printf("%i\n", IS_UPPER_CASE('R'));

	return 0;
}