#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

float gx1, gx2;
float a, b, c;

float absoluteValue(float x)
{
	if (x < 0)
		return -x;
	else
		return x;
}

float squareRoot(float x)
{
	const float eplise = 0.0001;
	float guess = 1.0;
	float absoluteValue(float n);

	while (absoluteValue(guess * guess - x) >= eplise)
		guess = (x / guess + guess) / 2.0;

	return guess;
}

void root(float a, float b, float c)
{
	float squareRoot(float x);

	gx1 = (-b + squareRoot(b * b - 4 * a * c)) / (2 * a);
	gx2 = (-b - squareRoot(b * b - 4 * a * c)) / (2 * a);
}

int discriminantFomation(float a, float b, float c)
{
	float discriminantion;
	void root(float a, float b, float c);

	discriminantion = b * b - 4 * a * c;

	if (discriminantion >= 0) {
		root(a, b, c);
		return 1;
	}
	else
		return 0;
}

int main(void)
{	
	int discriminantFomation(float a, float b, float c);
	
	printf("Enter a, b and c: ");
	scanf("%f %f %f", &a, &b, &c);

	if (discriminantFomation(a, b, c))
		printf("The roots are x1 = %f, x2 = %f\n", gx1, gx2);
	else
		printf("The are no real root.\n");

	return 0;	
}