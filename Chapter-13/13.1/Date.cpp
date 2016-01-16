#include <iostream>
#include <string>
#include "Date.h"

void Date::initDay(int d)
{
	if (d < 31 && d > 0)
		day = d;
	else
	{
		std::cout << "Invalide value" << std::endl;
		exit(EXIT_FAILURE);
	}
}

void Date::initMonth(int m)
{
	if (m < 13 && m > 0)
		month = m;
	else
	{
		std::cout << "Invalide value" << std::endl;
		exit(EXIT_FAILURE);
	}
}

void Date::initYear(int y)
{
	if (y > 0)
		year = y;
	else
	{
		std::cout << "Invalide value" << std::endl;
		exit(EXIT_FAILURE);
	}
}

void Date::showDate1()
{
	std::cout << day << "/" << month << "/" << year << std::endl;
}

void Date::showDate2()
{
	std::string strMonth;
	switch(month)
	{
		case 1: strMonth = "January"; break;
		case 2: strMonth = "Febuary"; break;
		case 3: strMonth = "March"; break;
		case 4: strMonth = "April"; break;
		case 5: strMonth = "May"; break;
		case 6: strMonth = "June"; break;			
		case 7: strMonth = "July"; break;
		case 8: strMonth = "August"; break;			
		case 9: strMonth = "September"; break;
		case 10: strMonth = "October"; break;
		case 11: strMonth = "November"; break;
		case 12: strMonth = "December"; break;
	}
	std::cout << strMonth << " " << day << ", " << year << std::endl;
}

void Date::showDate3()
{
	std::string strMonth;
	switch(month)
	{
		case 1: strMonth = "January"; break;
		case 2: strMonth = "Febuary"; break;
		case 3: strMonth = "March"; break;
		case 4: strMonth = "April"; break;
		case 5: strMonth = "May"; break;
		case 6: strMonth = "June"; break;			
		case 7: strMonth = "July"; break;
		case 8: strMonth = "August"; break;			
		case 9: strMonth = "September"; break;
		case 10: strMonth = "October"; break;
		case 11: strMonth = "November"; break;
		case 12: strMonth = "December"; break;
	}
	std::cout << day << " " << strMonth << " " << year << std::endl;
}
