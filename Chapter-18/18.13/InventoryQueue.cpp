#include "InventoryQueue.h"
#include <iostream>
#include <string>
using namespace std;

InventoryQueue::~InventoryQueue()
{
	QueueNode *nodePtr = new QueueNode;
	if (isEmpty())
		return;
	else
	{
		nodePtr = front;
		while (nodePtr)
		{
			nodePtr = front->next;
			delete front;
			front = nodePtr;
		}
	}
}

void InventoryQueue::enqueue(string numb, string date, string lot)
{
	QueueNode *nodePtr = new QueueNode;
	
	nodePtr->serialNumber = numb;
	nodePtr->date = date;
	nodePtr->partLot = lot;
	nodePtr->next = nullptr;

	if (isEmpty())
	{
		front = nodePtr;
		rear = nodePtr;
	}
	else
	{
		rear->next = nodePtr;
		rear = nodePtr;
	}
	numItems++;
}

void InventoryQueue::dequeue(string &numb, string &date, string &lot)
{
	QueueNode *nodePtr = new QueueNode;

	if (isEmpty())
		cout << "The queue is empty" << endl;
	else
	{
		nodePtr = front;
		numb = nodePtr->serialNumber;
		date = nodePtr->date;
		lot = nodePtr->partLot;
		nodePtr = front->next;
		delete front;
		front = nodePtr;
		numItems--;
	}
}

bool InventoryQueue::isEmpty()
{
	bool status;
	if (numItems == 0)
		status = true;
	else
		status = false;

	return status;
}

void InventoryQueue::display()
{
	QueueNode *nodePtr;

	if (isEmpty())
		cout << "The queue is empty" << endl;
	else
	{
		cout << "There are " << numItems << " items left" << endl;
		nodePtr = front;
		while (nodePtr)
		{
			cout << "Serial Number: " << nodePtr->serialNumber << endl;
			cout << "Manufacuring Date: " << nodePtr->date << endl;
			cout << "Part Lot: " << nodePtr->partLot << endl;
			cout << endl;
			nodePtr = nodePtr->next;
		}
	}
}
