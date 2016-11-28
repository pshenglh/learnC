#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

struct date
{
	int year;
	int month;
	int day;
};

char theDayOfWeek[7][3] = { { 'S', 'u', 'n' } ,
{ 'M', 'o', 'n' },{ 'T', 'u', 'e' },
{ 'W', 'e', 'd' },{ 'T', 'h', 'u' },
{ 'F', 'r', 'i' },{ 'S', 'a', 't' },
 };

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

int convert_to_week(int n)
{
	
	int week;

	week = (n - 621049) % 7;

	return week;
}

int main(void)
{
	int convertToN(struct date n);
	int convert_to_week(int n);
	struct date date1;
	int n, week;
	
	printf("Enter the date(yyyy mm dd): ");
	scanf("%i %i %i", &date1.year, &date1.month, &date1.day);

	n = convertToN(date1);
	week = convert_to_week(n);

	printf("It's %c%c%c\n", theDayOfWeek[week][0], theDayOfWeek[week][1],
		theDayOfWeek[week][2]);

	return 0;

}