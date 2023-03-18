#include "Data.h"

Data::Data(int day , int month , int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

void Data::display()
{
	std::cout << day << " " << month << " " << year;
}
