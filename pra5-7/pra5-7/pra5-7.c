#include <stdio.h>

int main(void)
{
	int dollars, cents, count;

	for (count = 1; count <= 10; ++count) {
		printf("Enter dollars: ");
		scanf_s("%i", &dollars);
		printf("Enter cents: ");
		scanf_s("%i", &cents);
		printf("$%i.%.2i\n\n", dollars, cents);
	}
	return 0;
}