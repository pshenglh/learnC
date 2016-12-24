#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

bool isLeapYear(struct date *d)
{
	if ((d->year % 4 == 0 && d->year % 100 != 0) || d->year % 400 == 0)
		return true;
	else
		return false;
}

int numberOfDays(struct date *today)
{
	int days;
	bool isLeapYear(struct date *d);
	const int daysPerMonth[13] =
	{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


	if (isLeapYear(today) && today->month == 2)
		days = 29;
	else
		days = daysPerMonth[today->month];

	return days;
}
void dateUpdate(struct date *today)
{
	int numberOfDays(struct date *today);
	
	if (today->day != numberOfDays(today))
		today->day++;

	else if (today->month == 12)
	{
		today->day = 1;
		today->month = 1;
		today->year++;
	}

	else
	{
		today->day = 1;
		today->month++;
	}
}

int main(void)
{
	struct date today;
	void dateUpdate(struct date *today);

	printf("Enter the date: ");
	scanf("%i%i%i", &today.year, &today.month, &today.day);

	dateUpdate(&today);

	printf("Tomorrow is: %i/%i/%i\n", today.year, today.month, today.day);

	return 0;
}

