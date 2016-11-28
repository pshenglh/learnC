#include <stdio.h>
#include <stdbool.h>

bool alphabetic(const char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return true;
	else
		return false;
}

int countWords(const char string[])
{
	int i, wordcount = 0;
	bool lookingForWord = true, alphabetic(const char c);

	for (i = 0; string[i] != '\0'; i++)
		if (alphabetic(string[i]) || string[i] == '\'')
		{
			if (lookingForWord)
			{
				++wordcount;
				lookingForWord = false;
			}
		}
		else
			lookingForWord = true;

	return wordcount;
}

int main(void)
{
	const char text1[] = "Well, here goes.";
	const char text2[] = "And here wo go... again.";
	const char text3[] = "It's me!";
	int countWords(const char string[]);

	printf("%s - words = %i\n", text1, countWords(text1));
	printf("%s - words = %i\n", text2, countWords(text2));
	printf("%s - words = %i\n", text3, countWords(text3));

	return 0;
}