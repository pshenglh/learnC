#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

void insertEntry(struct entry *beinserted, struct entry *insert)
{
	insert->next = beinserted->next;
	beinserted->next = insert;	
}

int main(void)
{
	void insertEntry(struct entry *bein, struct entry *in);
	struct entry n1, n2, n3, n23;
	struct entry *bein, *in, *start = &n1;

	n1.value = 100;
	n1.next = &n2;

	n2.value = 200;
	n2.next = &n3;

	n23.value = 250;
	n23.next = 0;

	n3.value = 300;
	n3.next = 0;

	bein = &n2;
	in = &n23;

	insertEntry(bein, in);	

	while (start)
	{
		printf("%i ", start->value);
		start = start->next;
	}

	return 0;
	
}