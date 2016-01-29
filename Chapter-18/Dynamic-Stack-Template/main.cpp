#include <iostream>
#include <string>
#include "DynamicStack.h"
using namespace std;

const int PUSH_CHOICE = 1,
		  POP_CHOICE = 2,
		  QUIT_CHOICE = 3;

void menu(int & ); 
void pushItem(DynamicStack<string> & );
void popItem(DynamicStack<string> & );

int main()
{
	int choice;
	DynamicStack<string> stack;

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

void pushItem(DynamicStack<string> &stack)
{
	string item;
	cout << "Enter your book's name: ";
	cin.ignore();
	getline(cin, item);
	stack.push(item);
	cout << item << " has been pushed in" << endl;
}

void popItem(DynamicStack<string> &stack)
{
	string item;
	if (stack.isEmpty())
		cout << "No more item in the stack " << endl;
	else
	{
		stack.pop(item);
		cout << item << " has been pop out " << endl;
	}
}
