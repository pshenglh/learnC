//Program to generate the first 15 fibonacci numbers
#include <stdio.h>

int main(void)
{
	int fabonacci[15], i;

	fabonacci[0] = 0;
	fabonacci[1] = 1;

	for (i = 2; i < 15; ++i)
		fabonacci[i] = fabonacci[i - 2] + fabonacci[i - 1];

	for (i = 0; i < 15; ++i)
		printf("%i\n", fabonacci[i]);

	return 0;
}