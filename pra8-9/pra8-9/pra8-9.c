#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int gcd(int u, int v)
{
	int temp;
	
	while (v != 0) {
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

int lcm(int u, int v)
{
	int gcd(int u, int v);
	
	return u * v / gcd(u, v);
}

int main(void)
{
	int u, v;
	int lcm(int u, int v);
	
	printf("Enter two digit: ");
	scanf("%i %i", &u, &v);

	printf("The lcn is: %i\n", lcm(u, v));

	return 0;
}