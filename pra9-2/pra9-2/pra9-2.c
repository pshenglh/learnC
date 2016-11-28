#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

struct date
{
	int year;
	int month;
	int day;
};

int absoluteValue(int n)
{
	if (n < 0)
		return -n;
	else
		return n;
}

int convertToN(struct date d)
{
	int n;
	int f(int year, int month);
	int g(int month);

	n = 1461 * f(d.year, d.month) / 4 + 153 * g(d.month) / 5 + d.day;

	return n;
}


int f(int year, int month)
{
	if (month <= 2)
		return year - 1;
	else
		return year;
}

int g(int month)
{
	if (month <= 2)
		return month + 13;
	else
		return month + 1;
}

int main(void)
{
	int covertToN(struct date d);
	int absoluteValue(int n);
	struct date date1, date2;
	int theIntervalOfTwoDays;

	printf("Enter two dates(yyyy mm dd): ");
	scanf("%i %i %i %i %i %i", &date1.year, &date1.month,
		&date1.day, &date2.year, &date2.month, &date2.day);

	theIntervalOfTwoDays = absoluteValue(convertToN(date1) - convertToN(date2));

	printf("The interval of two days is: %i\n", theIntervalOfTwoDays);

	return 0;
}