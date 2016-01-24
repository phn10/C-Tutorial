#include "NumberList.h"
#include <iostream>
using namespace std;

void NumberList::appendNode(int v)
{
	node *newNode;
	node *nodePtr;

	// store value in appened node
	newNode = new node;
	newNode->next = nullptr;
	newNode->value = v;

	// if there are no nodes in the list
	// make new node the fist node
	if (!head)
		head = newNode;
	else
	{
		nodePtr = head;
		while (nodePtr->next)
			nodePtr = nodePtr->next;

		// until nodePtr point to the end node
		nodePtr->next = newNode;
	}
}

void NumberList::displayList() const
{
	node *nodePtr; // to move along the array
	
	nodePtr = head;
	
	while (nodePtr)
	{
		cout << nodePtr->value << endl;
		nodePtr = nodePtr->next;
	}
}

void NumberList::deleteNode(int v)
{
	node *nodePtr;
	node *previousNode; // this pointer point to struct right after that of nodePtr;

	if (!head)
		return;
	

	if (head->value == v)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		nodePtr = head;
		previousNode = nullptr;

		while (nodePtr->value != v && nodePtr != nullptr)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

void NumberList::insertNode(int index, int v)
{
	node *newNode = new node;
	node *nodePtr;
	node *previousNode = nullptr;

	newNode->value = v;
	
	// check if the position is correct
	if (index >= 1)
	{
		nodePtr = head;
		previousNode = nullptr;

		// moving the nodePtr as along as it point to the correct
		// position
		for (int i = 1; i < index; i++)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
			if (nodePtr == nullptr) return;
		}
		
		// if index == 1, which means insert the number
		// at the beginning of the array
		if (previousNode == nullptr)
		{
			newNode->next = head;
			head = newNode;
		}
		else // place newNode pointer between previousNode and ptrNode
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
	else return;
}

NumberList::~NumberList()
{
	node *nodePtr;
	node *nextNode;

	nodePtr = head;

	while(nodePtr)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}
