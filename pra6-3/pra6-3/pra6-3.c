#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	int a, b;
	float c;

	printf("Enter two numbers: \n");
	scanf("%i %i", &a, &b);

	if (b == 0)
		printf("Division by zero.\n");
	else {
		c = (float)a / b;
		printf("%.3f", c);
	}
		
	return 0;
}