#include <stdio.h>

float arraySum(float array[], int n)
{
	float sum = 0;
	int i;

	for (i = 0; i < n; i++) 
		sum += array[i];

	return sum;
}

int main(void)
{
	float array1[10];
	int i,n = 10;
	float arraySum(float array[], int n);

	for (i = 0; i < n; i++)
		array1[i] = 2;

	printf("The sum is %f\n", arraySum(array1, n));
}