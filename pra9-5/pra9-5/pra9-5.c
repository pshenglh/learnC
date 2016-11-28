#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct dateAndTime
{
	struct date sdate;
	struct time stime;
};

struct date dateUpdate(struct date today)
{
	struct date tomorrow;
	int numberOfDays(struct date d);

	if (today.day != numberOfDays(today))
		tomorrow = (struct date) {
		today.month,
			today.day + 1, today.year
	};
	else if (today.month == 12)
		tomorrow = (struct date) { 1, 1, today.year + 1 };
	else
		tomorrow = (struct date) { today.month + 1, 1, today.year };
		
	return tomorrow;
}

int numberOfDays(struct date d)
{
	int days;
	bool isLeapYear(struct date d);
	const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30,
		31, 31, 30, 31, 30, 31 };

	if (isLeapYear(d) == true && d.month == 2)
		days = 29;
	else
		days = daysPerMonth[d.month - 1];

	return days;
}

bool isLeapYear(struct date d)
{
	bool leapYearFlag;

	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
		leapYearFlag = true;
	else
		leapYearFlag = false;

	return leapYearFlag;
}

struct time timeUpdate(struct time now)
{
	++now.seconds;
	if (now.seconds == 60) {
		now.seconds = 0;
		++now.minutes;

		if (now.minutes == 60) {
			now.minutes = 0;
			++now.hour;

			if (now.hour == 24)
				now.hour = 0;
		}
	}
	return now;
}

struct dateAndTime dateAndTimeUpdate(struct dateAndTime dateTime)
{
	struct date dateUpdate(struct date tody);
	struct time timeUpdate(struct time now);
	struct dateAndTime newDateAndTime;

	newDateAndTime.stime = timeUpdate(dateTime.stime);

	if (newDateAndTime.stime.hour == 0 && newDateAndTime.stime.minutes == 0 &&
		newDateAndTime.stime.seconds == 0)
		newDateAndTime.sdate = dateUpdate(dateTime.sdate);
	else
		newDateAndTime.sdate = dateTime.sdate;

	return newDateAndTime;
}

int main(void)
{
	struct dateAndTime dateAndTimeUpdate(struct dateAndTime dateTime);
	struct dateAndTime dateAndTimeNow, dateAndTimeNew;

	printf("Enter date and time(yyyy/mm/dd hh:mm:ss): ");
	scanf("%i/%i/%i %i:%i:%i", &dateAndTimeNow.sdate.year,
		&dateAndTimeNow.sdate.month, &dateAndTimeNow.sdate.day,
		&dateAndTimeNow.stime.hour, &dateAndTimeNow.stime.minutes,
		&dateAndTimeNow.stime.seconds);

	dateAndTimeNew = dateAndTimeUpdate(dateAndTimeNow);

	printf("%i/%i/%i %.2i:%.2i:%.2i\n", dateAndTimeNew.sdate.year,
		dateAndTimeNew.sdate.month, dateAndTimeNew.sdate.day,
		dateAndTimeNew.stime.hour, dateAndTimeNew.stime.minutes,
		dateAndTimeNew.stime.seconds);

	return 0;
}