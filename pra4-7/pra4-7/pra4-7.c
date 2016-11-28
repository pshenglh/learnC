#include <stdio.h>

int main(void)
{
	float result;

	result = 3.31 * 10 - 8 * 2.01 * 10 - 7 / (7.16 * 10 - 6 + 2.01 * 10 - 8);
	printf("The result is %e\n", result);

	return 0;
}