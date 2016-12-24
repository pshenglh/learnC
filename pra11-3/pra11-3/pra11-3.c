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
	struct entry n1, n2, n3, ns;
	struct entry *bein, *s, start;

	n1.value = 100;
	n1.next = &n2;

	n2.value = 200;
	n2.next = &n3;

	ns.value = 50;
	ns.next = 0;

	n3.value = 300;
	n3.next = 0;

	start.next = &n1;
	bein = &start;

	insertEntry(bein, &ns);

	s = start.next;

	while (s)
	{
		printf("%i ", s->value);
		s = s->next;
	}

	return 0;

}