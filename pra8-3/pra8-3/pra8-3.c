//计算平方根

#include <stdio.h>

float absoluteValue(float x)
{
	if (x < 0)
		x = -x;
	return x;
}

float squareRoot(float x, double e)
{
	const double epsilon = e;
	float guess = 1.0;

	while (absoluteValue(guess * guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;

	return guess;
}

int main(void)
{
	printf("(epsilon = 0.00001) squareRoot (2.0) = %f\n", squareRoot(2.0, 0.00001));
	printf("(epsilon = 0.0001) squareRoot (2.0) = %f\n", squareRoot(2.0, 0.0001));
	printf("(epsilon = 0.000001) squareRoot (2.0) = %f\n", squareRoot(2.0, 0.000001));

	return 0;
}