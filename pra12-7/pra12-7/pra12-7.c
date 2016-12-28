#include <stdio.h>

unsigned int bitpat_get(unsigned int source, int start, int l)
{
	int i = 1, j;
	unsigned int temp = 1, pattern = 0;

	while (temp != 0)
	{
		temp = source >> i;
		i++;
	}

	for (j = 0; j < l; j++)
		pattern = pattern | (1 << j);

	source = (source >> (i - 1 - start - l)) & pattern;

	return source;
}

int main(void)
{
	unsigned int w = 0xe1f4;
	unsigned int bitpat_get(unsigned int source, int start, int l);

	printf("%x\n", bitpat_get(w, 2, 3));

	return 0;
}