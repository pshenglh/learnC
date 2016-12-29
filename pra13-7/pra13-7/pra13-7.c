#define IS_LOWER_CASE(a) (((a) >= 'a' && (a) <= 'z') ? 1 : 0)
#define IS_UPPER_CASE(a) (((a) >= 'A' && (a) <= 'Z') ? 1 : 0)
#define IS_ALPHABETIC(a) (IS_LOWER_CASE(a) || IS_UPPER_CASE(a))
#include <stdio.h>

int main(void)
{
	printf("%i\n", IS_ALPHABETIC('d'));
	printf("%i\n", IS_ALPHABETIC('A'));
	printf("%i\n", IS_ALPHABETIC(')'));

	return 0;
}