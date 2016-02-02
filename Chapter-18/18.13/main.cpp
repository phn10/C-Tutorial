#include <iostream>
#include "InventoryQueue.h"
#include <string>
using namespace std;

const int PUSH_CHOICE = 1,
		  POP_CHOICE = 2,
		  QUIT_CHOICE = 3;

void menu(int &);
void pushItem(InventoryQueue &);
void popItem(InventoryQueue &);
void displayItem(InventoryQueue &);

int main()
{
	int choice;
	InventoryQueue queue;

	do
	{
		menu(choice);

		if (choice != QUIT_CHOICE)
		{
			switch (choice)
			{
			case PUSH_CHOICE:	
				pushItem(queue); break;
			case POP_CHOICE:
				popItem(queue); break;
			}
		}
	} while (choice != QUIT_CHOICE);
	displayItem(queue);

	cin.get();
	cin.get();
	return 0;
}

void menu(int &choice)
{
	cout << "1. Push an item into queue " << endl;
	cout << "2. Pop an item out of queue" << endl;
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

void pushItem(InventoryQueue &queue)
{
	string numb, date, lot;
	cout << "Enter the serial number: ";
	cin.ignore();
	getline(cin, numb);
	cout << "Enter the manufacturing date: ";

	getline(cin, date);
	cout << "Enter the part lot: ";
	
	getline(cin, lot);

	queue.enqueue(numb, date, lot);
	cout << "Item has been pushed in" << endl;
	cout << endl;
}

void popItem(InventoryQueue &queue)
{
	string numb, date, lot;
	queue.dequeue(numb, date, lot);
	if (queue.isEmpty())
		return;
	else
	{
		cout << "Item has been popped out" << endl;
		cout << "Serial Number: " << numb << endl;
		cout << "Manufacturing Date: " << date << endl;
		cout << "Part's Lot: " << lot << endl;
		cout << endl;
	}
}

void displayItem(InventoryQueue &queue)
{
	queue.display();
}
