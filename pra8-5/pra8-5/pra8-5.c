//����ƽ����

#include <stdio.h>

float absoluteValue(float x)
{
	if (x < 0)
		x = -x;
	return x;
}

float squareRoot(float x)
{
	const float epsilon = .00001;
	float guess = 1.0;

	while (absoluteValue(guess * guess / x - 1) >= epsilon)
		guess = (x / guess + guess) / 2.0;

	return guess;
}

int main(void)
{
	printf("squareRoot (2.0) = %f\n", squareRoot(0.1));
	printf("squareRoot (144.0) = %f\n", squareRoot(14563456));
	printf("squareRoot (17.5) = %f\n", squareRoot(17.5));

	return 0;
}