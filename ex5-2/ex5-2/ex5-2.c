#include <stdio.h>

int main(void)
{
	int n, trianglarNumber;

	trianglarNumber = 0;
	for (n = 1; n < 200; n = n + 1)
		trianglarNumber = trianglarNumber + n;

	printf("The 200th trianglarNumber is %i\n", trianglarNumber);

	return 0;
}