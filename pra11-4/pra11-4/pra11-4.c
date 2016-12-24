#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

void removeEntry(struct entry *dellist)
{
	dellist->next = dellist->next->next;
}

int main(void)
{
	void removeEntry(struct entry *dellist);
	struct entry n1, n2, n3, n4, *ptr, start;
	
	n1.value = 100;
	n1.next = &n2;

	n2.value = 200;
	n2.next = &n3;
	
	n3.value = 300;
	n3.next = &n4;

	n4.value = 400;
	n4.next = 0;

	removeEntry(&n2);

	ptr = &n1;

	while (ptr)
	{
		printf("%i ", ptr->value);
		ptr = ptr->next;
	}
	printf("\n");

	start.next = &n1;
	removeEntry(&start);

	ptr = start.next;

	while (ptr)
	{
		printf("%i ", ptr->value);
		ptr = ptr->next;
	}

	return 0;
}