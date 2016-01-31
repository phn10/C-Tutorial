#include <iostream>
#include "InventoryStack.h"
#include <string>
using namespace std;

const int PUSH_CHOICE = 1,
		  POP_CHOICE = 2,
		  QUIT_CHOICE = 3;

void menu(int &);
void pushItem(InventoryStack &);
void popItem(InventoryStack &);
void displayItem(InventoryStack &);

int main()
{
	int choice;
	InventoryStack stack;

	do
	{
		menu(choice);

		if (choice != QUIT_CHOICE)
		{
			switch (choice)
			{
			case PUSH_CHOICE:	
				pushItem(stack); break;
			case POP_CHOICE:
				popItem(stack); break;
			}
		}
	} while (choice != QUIT_CHOICE);
	displayItem(stack);

	cin.get();
	cin.get();
	return 0;
}

void menu(int &choice)
{
	cout << "1. Push an item into stack " << endl;
	cout << "2. Pop an item out of stack" << endl;
	cout << "3. Quit " << endl;
	cout << "Enter your choice: ";
	cin >> choice;

	while (choice < PUSH_CHOICE || choice > QUIT_CHOICE)
	{
		cout << "Invalid choice" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
	}
}

void pushItem(InventoryStack &stack)
{
	string numb, date, lot;
	cout << "Enter the serial number: ";
	cin.ignore();
	getline(cin, numb);
	cout << "Enter the manufacturing date: ";

	getline(cin, date);
	cout << "Enter the part lot: ";
	
	getline(cin, lot);

	stack.push(numb, date, lot);
	cout << "Item has been pushed in" << endl;
}

void popItem(InventoryStack &stack)
{
	string numb, date, lot;
	stack.pop(numb, date, lot);
	if (stack.isEmpty())
		return;
	else
	{
		cout << "Item has been popped out" << endl;
		cout << "Serial Number: " << numb << endl;
		cout << "Manufacturing Date: " << date << endl;
		cout << "Part's Lot: " << lot << endl;
	}
}

void displayItem(InventoryStack &stack)
{
	stack.display();
}
