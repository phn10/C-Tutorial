#include <iostream>
#include "Date.h"

int main()
{
	int day, month, year;
	std::cout << "Enter day: ";
	std::cin >> day;
	std::cout << "Enter month: ";
	std::cin >> month;
	std::cout << "Enter year: ";
	std::cin >> year;

	Date day1(day, month, year);
	day1.showDate1();
	day1.showDate2();
	day1.showDate3();

	std::cin.get();
	std::cin.get();
	return 0;
}


	
