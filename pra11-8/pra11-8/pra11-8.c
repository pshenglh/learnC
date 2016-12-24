#include <stdio.h>

void sort3(int *a, int *b, int *c)
{
	int temp;

	if (*a > *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
	
	if (*a > *c)
	{
		temp = *a;
		*a = *c;
		*c = temp;
	}

	if (*b > *c)
	{
		temp = *b;
		*b = *c;
		*c = temp;
	}
}

int main(void)
{
	int a = 56, b = 8, c = -12;

	sort3(&a, &b, &c);

	printf("%i %i %i\n", a, b, c);

	return 0;
}