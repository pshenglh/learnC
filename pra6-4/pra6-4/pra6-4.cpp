#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	int value, end = 0;
	float result = 0;
	char operation;	

	while (end != 1) {

		printf("Enter your operate: \n");
		scanf("%i %c", &value, &operation);

		switch (operation)
		{
		case 'S':
			result = (float)value;
			printf("%f\n", result);
			break;
		case '+':
			result += value;
			printf("%f\n", result);
			break;
		case '-':
			result -= value;
			printf("%f\n", result);
			break;
		case '*':
			result *= value;
			printf("%f\n", result);
			break;
		case '/':
			if (value == 0)
				printf("Division by zero.\n");
			else {
				result /= value;
				printf("%f\n", result);
				break;
			}
		case 'E':
			printf("%f\nEnd of Caculations.\n", result);
			end = 1;
			break;
		default:
			printf("Invalid Caculation.\n");
			break;
		}
	}

	return 0;
}