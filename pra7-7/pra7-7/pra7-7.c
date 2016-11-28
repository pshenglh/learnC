#include <stdio.h>

int main(void)
{
	int P[151], i, n = 150, j;

	for (i = 0; i <= 150; ++i) 
		P[i] = 0;

	for (i = 2; i <= 150; ++i)
		for (j = i; j <= 150; ++j)
			if (i * j <= n) 
				P[i * j] = 1;

	for (i = 2; i <= 150; ++i)
		if (P[i] == 0)
			printf("\n%i ", i);

	return 0;
}