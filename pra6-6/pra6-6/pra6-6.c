#include <stdio.h>

int main(void)
{
	int number, n = 1, i = 1, temp = 0;

	printf("Enter a number: ");
	scanf_s("%i", &number);

	if (number == 0)
		printf("zero\n");
	else {
		while (n != 0) {
			n = number / i;
			if (n != 0)
				i *= 10;
		}

		i = i / 10;
		while (i >= 1) {
			temp = number / i;
			number = number - (temp * i);
			i /= 10;

			switch (temp)
			{
			case 0:
				printf("zero ");
				break;
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;
			default:
				printf("*");
				break;
			}

			if (i < 1)
				printf("\n");
		}
	}
}