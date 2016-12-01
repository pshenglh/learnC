#include <stdio.h>
#include <math.h>

float strToFloat(char s[])
{
	int i, value, decime, start = 0, signal = 1;
	float result = 0.0, fact = 10.0;

	if (s[0] == '-')
	{
		start = 1;
		signal = -1;
	}

	for (i = start; s[i] >= '0' && s[i] <= '9' || s[i] == '.'; i++)
	{
		if (s[i] == '.')
		{
			fact = 0.1;
			decime = i;
			continue;
		}

		value = s[i] - '0';
		if (fact == 10)
			result = result * fact + value;
		else
		{
			result = result + value * pow(fact, (i - decime));
		}
	}

	return signal * result;
}

int main(void)
{
	char s1[20] = "0.34134534";

	printf("%f\n", strToFloat(s1));

	return 0;
}