#include "Birthday.h"
void Birthday::import()
{
	cout << "\tday:";
	cin >> day;
	cout << "\tmonth: ";
	cin >> month;
	cout << "\tyear: ";
	cin >> year;
}
void Birthday::export()
{
	cout << day << "/" << month << "/" << year;
}
int Birthday::getDay()
{
	return day;
}
int Birthday::getMonth()
{
	return month;
}
int Birthday::getYear()
{
	return year;
}
void Birthday::setDay(int day)
{
	day = day;
}
void Birthday::setMonth(int month)
{
	month = month;
}
void Birthday::setYear(int year)
{
	year = year;
}
