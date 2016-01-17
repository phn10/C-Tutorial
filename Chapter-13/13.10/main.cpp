#include <iostream>
#include "Array.h"

int main()
{
	int size;
	double num;
	std::cout << "Enter array size: ";
	std::cin >> size;

	Array numbers(size);

	for (int i = 0; i < size; i++)
	{
		std::cout << "Enter element #" << i + 1 << ": ";
		std::cin >> num;
		numbers.setElement(i, num);
	}
	
	std::cout << "The highest number is: " << numbers.findHighest() << std::endl;
	std::cout << "The lowest number is: " << numbers.findLowest() << std::endl;
	std::cout << "The average of the array: " << numbers.findAverage() << std::endl;

	std::cin.get();
	std::cin.get();
	return 0;
}
