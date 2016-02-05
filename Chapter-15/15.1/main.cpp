#include <iostream>
#include <string>
#include "ProductionWorker.h"

int main()
{
	std::string name;
	int number;
	std::string date;
	int shift;

	std::cout << "Enter the name of employee: ";
	getline(std::cin, name);

	std::cout << "Enter the ID number of employee: ";
	std::cin >> number;

	std::cout << "Enter the date of employee: ";
	std::cin.ignore();
	getline(std::cin, date);

	std::cout << "Enter the shift of employee (1 for day, 2 for night): ";
	std::cin >> shift;

	ProductionWorker employee1;
	employee1.setName(name);
	employee1.setDate(date);
	employee1.setNumber(number);
	employee1.setShift(shift);

	employee1.selectRate();

	std::cout << "Name: " << employee1.getName() << std::endl;
	std::cout << "ID  : " << employee1.getNumber() << std::endl;
	std::cout << "Date: " << employee1.getDate() << std::endl;
	std::cout << "Rate: " << employee1.getPayRate() << std::endl;

	return 0;
}
