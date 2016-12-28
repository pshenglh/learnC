#include <stdio.h>

int main(void)
{
	signed int w = 0xF777EE22;

	w = w >> 1;

	printf("%0X\n", w);

	return 0;
}