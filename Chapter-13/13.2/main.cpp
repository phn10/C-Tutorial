#include <iostream>
#include <string>
#include <iomanip>
#include "Employee.h"

int main()
{
	const int NUM_EMP = 3;
	Employee employee[NUM_EMP] = 
	{ Employee("Susan Meyers", 47899, "Accounting   ", "Vice President"),
	  Employee("Mark Jones  ", 39119, "IT           ", "Programmer    "),
	  Employee("Joy Rogers  ", 81774, "Manufacturing", "Engineer      ") };
	
	std::cout << "Name                  "
		      << "ID                "
		      << "Department              " 
		      << "Position       " << std::endl;
	for (int count = 0; count < NUM_EMP; count++)
	{
		std::cout << employee[count].getName()
				  << std::setw(15) << employee[count].getID()
				  << "\t\t" << employee[count].getDepart()
				  << "\t\t" << employee[count].getPosi() << std::endl;
	}
	std::cin.get();
	std::cin.get();
	return 0;
}

// Program should use cstring instead of string. While using cstring, we can define the number of char, 
// which can align the table better
