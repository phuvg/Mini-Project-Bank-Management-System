#pragma once
#include <iostream>
using namespace std;
class Birthday
{
private:
	int day;
	int month;
	int year;
public:
	void input();
	void output();
	int getDay();
	int getMonth();
	int getYear();
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
};

