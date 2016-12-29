#define SHIFT(value, n) (((n) > 0) ? ((value) << (n)) : ((value) >> -(n)))
#include <stdio.h>

int main(void)
{
	unsigned int w = 0770;
	
	printf("%o\n", SHIFT(w, 3));
	printf("%o\n", SHIFT(w, -3));

	return 0;
}
