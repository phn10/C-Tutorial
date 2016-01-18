#include <iostream>
#include <iomanip>
#include <string>
#include "RetailItem.h"

int main()
{
	const int NUM_ITEM = 3;
	RetailItem item[NUM_ITEM] = {RetailItem("Jacket", 12, 59.95),
								 RetailItem("Designer Jeans", 40, 34.95),
								 RetailItem("Shirt", 20, 24.95)};
	std::cout << std::left 
			  << std::setw(15) << " "
			  << std::setw(25) << "Description"
			  << std::setw(25) << "Units on Hand"
			  << std::setw(25) << "Price" << std::endl;
	std::cout << "--------------------------------------"
		      << "--------------------------------------"
			  << std::endl;
	for (int count = 0; count < NUM_ITEM; count++)
	{
		std::cout << std::left << "Item #" 
			<< std::setw(9) << count + 1 
			<< std::setw(25) << item[count].getDescription()
			<< std::setw(25) << item[count].getUnits()
			<< std::setw(25) << item[count].getPrice() << std::endl;
	}
	std::cin.get();
	std::cin.get();
	return 0;
}


// std::setw() to set the width of each strings
// std::left to justify the strings on the left
// originally, strings are justify on the right
// we don't need to use cstring anymore
