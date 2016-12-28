#include <stdio.h>

unsigned int bitpat_set(unsigned int source, unsigned int replace, int start, int l)
{
	int i = 0, j;
	unsigned int temp = 1, pattern = 0;

	while (temp != 0)
	{
		i++;
		temp = source >> i;
		if (i >= 32)
			break;
	}
	
	for (j = i - start - 1; j > i - start - l; j--)
		pattern = pattern | (1 << j);

	source = source & ~pattern;
	replace = replace << (i - start - l);
	replace = replace & pattern;

	source = source | replace;

	return source;
}

int main(void)
{
	unsigned int bitpat_set(unsigned int source, unsigned int replace, int start, int l);
	unsigned int s = 0xffffffffu, r = 0x777u;

	printf("%x\n", bitpat_set(s, r, 8, 12));

	return 0;
}