#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	float v1, v2;
	char o;

	printf("Type the expression\n");
	scanf("%f %c %f", &v1, &o, &v2);

	printf("%f %c %f", v1, o, v2);

	return 0;
}