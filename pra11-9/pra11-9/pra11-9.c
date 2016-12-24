#include <stdio.h>

void readLine(char *theGet)
{
	char character;

	do
	{
		character = getchar();
		*theGet++ = character;
	} while (character != '\n');

	*theGet = '\0';
}

int main(void)
{
	int i;
	char line[81];
	void readLine(char *get);

	for (i = 0; i < 3; ++i)
	{
		readLine(line);
		printf("%s", line);
	}

	return 0;
}