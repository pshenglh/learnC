#include <stdio.h>
struct entry
{
	char word[15];
	char definition[50];
};

int stringLenth(char string[])
{
	int i = 0;

	while (string[i] != '\0')
		++i;
	return i;
}

struct entry dictionarySort(struct entry dict[], int number)
{
	int stringLenth(char string[]);
	int i, j, k, temp = number + 1;

	for (i = 0; i < 15; i++)
		for (j = 0; j < number - 1; j++)
			for (k = j + 1; k < number; k++)
			{
				if (i == 0)
				{
					printf("%s\n", dict[j].word);
					if (dict[j].word[i] > dict[k].word[i])
					{
						dict[temp] = dict[k];
						dict[k] = dict[j];
						dict[j] = dict[temp];
					}
				}
				else
					break;
			}

	return dict[100];

}

int main(void)
{
	struct entry dict[100];
	int i;

	const struct entry dictionary[100] = {
		{ "aardvark", "a burrowing African mammal" },
		{ "abyss", "a bottomless pit" },
		{ "aaumen", "mentally sharp; keen" },
		{ "addle", "to become confused" },
		{ "aerie", "a hight nest" },
		{ "affix", "to append; attach" },
		{ "agar", "a jelly made from seaweed" },
		{ "ahoy", "a nautial call of greeting" },
		{ "aigrette", "an ornamental cluster of feathers" },
		{ "ajar", "partially opened" }
	};

	dict[100] = dictionarySort(dictionary, 10);
	//for (i = 0; i < 10; i++)
		//printf("%s:%s", dict[i].word, dict[i].definition);

	return 0;
}