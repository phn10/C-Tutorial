#include "InventoryStack.h"

InventoryStack::~InventoryStack()
{
	StackNode *nodePtr;

	nodePtr = top;
	while (!isEmpty())
	{
		nodePtr = top->next;
		delete top;
		top = nodePtr;
	}
}

void InventoryStack::push(string numb, string date, string lot)
{
	StackNode *nodePtr = new StackNode;

	nodePtr->serialNumber = numb;
	nodePtr->date = date;
	nodePtr->partLot = lot;

	if (isEmpty())
	{
		top = nodePtr;
		top->next = nullptr;
	}
	else
	{
		nodePtr->next = top;
		top = nodePtr;
	}
	numItems++;
}

void InventoryStack::pop(string &numb, string &date, string &lot)
{
	StackNode *nodePtr = new StackNode;

	if (isEmpty())
		cout << "The stack is empty" << endl;
	else
	{
		nodePtr = top;
		numb = nodePtr->serialNumber;
		date = nodePtr->date;
		lot = nodePtr->partLot;
		nodePtr = top->next;
		delete top;
		top = nodePtr;
		numItems--;
	}
}

void InventoryStack::display()
{
	StackNode *nodePtr = new StackNode;

	if (isEmpty())
		cout << "The stack is empty" << endl;
	else
	{
		nodePtr = top;
		int num = numItems;
		while (nodePtr)
		{
			string number = nodePtr->serialNumber;
			string date = nodePtr->date;
			string lot = nodePtr->partLot;
			cout << "Item #" << num << endl;
			cout << "Serial Number        : " << number << endl;
			cout << "Date of manufacturing: " << date << endl;
			cout << "Part's Lot           : " << lot << endl;
			cout << endl;
			num--;
			nodePtr = nodePtr->next;
		}
	}
}

bool InventoryStack::isEmpty()
{
	bool status;

	if (top)
		status = false;
	else
		status = true;

	return status;
}
