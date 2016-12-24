#include <stdio.h>

struct entry
{
	int value;
	struct entry *fore;
	struct entry *next;
};

int main(void)
{
	struct entry n1, n2, n3, n4, *ptr;
	
	n1.value = 100;
	n1.next = &n2;
	n1.fore = 0;

	n2.value = 200;
	n2.next = &n3;
	n2.fore = &n1;

	n3.value = 300;
	n3.next = &n4;
	n3.fore = &n2;

	n4.value = 400;
	n4.next = 0;
	n4.fore = &n3;

	ptr = &n1;

	while (ptr)
	{
		printf("%i ", ptr->value);
		ptr = ptr->next;
	}
	printf("\n");

	return 0;
}