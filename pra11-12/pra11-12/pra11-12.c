#include <stdio.h>

char *messsage = "Programmig in C is fun\n";
char message2[] = "You said it\n";
char *format = "x = %i\n";
int x = 100;

int main(void)
{
	printf("Programming in C is fun\n");
	printf("%s", "Programing in C is fun\n");

	printf("You said it \n");
	printf("%s", message2);
	printf(message2);
	printf("%s", &message2[0]);

	printf(message2 + 4);
	printf("%s", message2 + 4);
	printf("%s", &message2[4]);

	printf("x = %i\n", x);
	printf(format, x);

}