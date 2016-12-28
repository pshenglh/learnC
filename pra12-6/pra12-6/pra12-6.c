#include <stdio.h>

unsigned int bit_set(unsigned int value, int n)
{
	value = value | 1 << (n - 1);

	return value;
}

int bitpat_search(unsigned int source, unsigned int pattern, int n)
{
	int int_size = 32, i, j, k = 1;
	unsigned int compare, movePattern, move, temp = 1, theMove = 0;

	for (i = 1; i <= n; i++)
		theMove = bit_set(theMove, i);

	movePattern = theMove & pattern;

	while (temp != 0)
	{
		temp = source >> k;
		k++;
	}

	for (j = k - 1 - n; j >= 0; j--)
	{
		move = (source >> j) & theMove;

		if (move == movePattern)
			return (k - 1 - j - n);
	}

	return -1;	
}

int main(void)
{
	int bitpat_search(unsigned int source, unsigned int pattern, int n);
	unsigned int s = 0xe1f4u, p = 0x8u;

	printf("%i\n", bitpat_search(s, p, 4));

	return 0;
}