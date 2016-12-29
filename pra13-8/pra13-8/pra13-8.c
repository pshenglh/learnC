#include "special.h"
#include <stdio.h>

int main(void)
{
	printf("%i\n", IS_SECIAL('z'));
	printf("%i\n", IS_SECIAL('Z'));
	printf("%i\n", IS_SECIAL('1'));
	printf("%i\n", IS_SECIAL('}'));

	return 0;
}