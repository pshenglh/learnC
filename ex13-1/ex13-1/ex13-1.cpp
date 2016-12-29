#include <stdio.h>

#define YES 1
#define NO 0

int isEven(int number)
{
	int anwser;

	if (number % 2 == 0)
		anwser = YES;
	else
		anwser = NO;
	 
	return anwser;
}

int main(void)
{
	int isEven(int number);

	if (isEven(17) == YES)
		printf("yes ");
	else
		printf("no ");

	if (isEven(20) == YES)
		printf("yes\n");
	else
		printf("no\n");

	return 0;
}