#include <stdio.h>

void sort(int a[], int n)
{
	int *i, *j, *aEnd, temp;

	i = a;
	aEnd = i + n;;
	while (i < aEnd)
	{
		j = i;
		while (j < aEnd)
		{
			if (*i > *j)
			{
				temp = *i;
				*i = *j;
				*j = temp;
			}
			j++;
		}
		i++;
	}
}

int main(void)
{
	int a[10] = { 34, 54, 1, -3, 4, -64, 94, 100, 42, 39 };
	int i;
	void sort(int a[], int n);

	sort(a, 10);

	for (i = 0; i < 10; i++)
		printf("%i ", a[i]);
	printf("\n");

	return 0;
}