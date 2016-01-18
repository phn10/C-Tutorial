#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include "RetailItem.h"
#include "CashRegister.h"

void displayTable();

const int NUM_ITEM = 3;
RetailItem item[NUM_ITEM] = {RetailItem("Jacket", 12, 59.95),
						     RetailItem("Designer Jeans", 40, 34.95),
							 RetailItem("Shirt", 20, 24.95)};

int main()
{
	CashRegister cash;
	int quantity;
	int index;
	double price;
	char ch = 'y';
	while (toupper(ch) == 'Y')
	{
		displayTable();
		std::cout << "Enter the item you want to buy: ";
		std::cin >> index;
		while (index > 3 || index < 1)
		{
			std::cout << "Invalid product!!\n"
				      << "Enter again!!\n"
			          << "Enter the item you want to buy: "; 
			std::cin >> index;
		}
		index -= 1;
		std::cout << "Enter quantity: ";
		std::cin >> quantity;
		while (quantity < 0)
		{
			std::cout << "Invalid quantity!!\n"
				      << "Enter again!!\n"
			          << "Enter quantity: "; 
			std::cin >> quantity;
		}
		while (quantity > item[index].getUnits())
		{
			std::cout << "The item you want to buy is out of stock!!\n"
				      << "Enter lesser amount!!\n"
			          << "Enter quantity: "; 
			std::cin >> quantity;
		}
		price = item[index].getPrice();
		cash.setCost(price);
		cash.setQuantity(quantity);
		item[index].subTractUnits(quantity);
		std::cout << "Product: " << item[index].getDescription() << "\t";
		std::cout << "Quantity: " << quantity << std::endl;
		std::cout << "\nSubtotal  : " << cash.getSubTotal() << std::endl;
		std::cout << "Tax       : " << cash.getTax() << std::endl;
		std::cout << "-----------------------" <<std::endl;
		std::cout << "TotalPrice: " << cash.getTotal() << std::endl << std::endl;
		std::cout << "Do you want to continue? ['Y' / 'N']: ";
		std::cin.ignore();
		std::cin.get(ch);
	}
	std::cin.get();
	std::cin.get();
	return 0;
}

void displayTable()
{
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
}
