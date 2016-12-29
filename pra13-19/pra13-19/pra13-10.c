#include <ctype.h>
#include <stdio.h>

int main(void)
{
	printf("%i\n", isupper('A'));
	printf("%i\n", isalpha('s'));
	printf("%i\n", isdigit('5'));

	return 0;
}