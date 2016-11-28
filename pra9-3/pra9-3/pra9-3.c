#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

struct time
{
	int hour;
	int minute;
	int second;
};

struct time elapsed_time(struct time t1, struct time t2)
{
	struct time e_time;
	
	if (t2.second < t1.second) {
		e_time.second = t2.second + 60 - t1.second;
		t2.minute--;
	}
	else
		e_time.second = t2.second - t1.second;

	if (t2.minute < t1.minute) {
		e_time.minute = t2.minute + 60 - t1.minute;
		t2.hour--;
	}
	else
		e_time.minute = t2.minute - t1.minute;

	if (t2.hour < t1.hour)
		e_time.hour = t2.hour + 24 - t1.hour;
	else
		e_time.hour = t2.hour - t1.hour;
		
	

	return e_time;
}

int main(void)
{
	struct time elapsed_time(struct time t1, struct time t2);
	struct time t1, t2;
	struct time the_interval;

	printf("Enter two times(hh mm ss): ");
	scanf("%i %i %i %i %i %i", &t1.hour, &t1.minute, &t1.second,
		&t2.hour, &t2.minute, &t2.second);

	the_interval = elapsed_time(t2, t1);

	printf("The interval of two time is: %i:%i:%i\n", the_interval.hour,
		the_interval.minute, the_interval.second);

	return 0;

}