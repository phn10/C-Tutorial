#ifndef DYNAMICSTACK_H
#define DYNAMICSTACK_H
#include <iostream>
using namespace std;

template <class T>
class DynamicStack
{
	private:
		struct StackNode
		{
			StackNode *next;
			T value;
		};
		
		StackNode *top;
	
	public:
		DynamicStack()
		{ top = nullptr; }

		~DynamicStack();

		void pop(T & );
		void push(T );
		bool isEmpty();
};

// destructor 
template <class T>
DynamicStack<T>::~DynamicStack()
{
	StackNode *nodePtr, *nextPtr;
	
	nodePtr = top; // position nodePtr to the top node of the stack

	while (nodePtr) // the loop stop when nodePtr = nullptr
	{
		nextPtr = nodePtr->next;
		delete nodePtr;
		nodePtr = nextPtr;
	}
}

// member function tp pop argument out of stack
template <class T>
void DynamicStack<T>::pop(T &item)
{

  // if there is no node in the stack
	if (isEmpty())
		cout << "The stack is empty" << endl;
	else
	{
		StackNode *nodePtr = nullptr; // create new nodePtr
		item = top->value; // assign num as the value of top node
		nodePtr = top->next; // position nodePtr the next pointer of top node
		delete top; // delete top node
		top = nodePtr; // assign top node new position
	}
}

// member function to push new arugment to the stack
template <class T>
void DynamicStack<T>::push(T item)
{
	StackNode *newNode = nullptr;
	
	newNode = new StackNode;
	newNode->value = item;

  // if the stack is empty, make new node the top node
	if (isEmpty())
	{
		top = newNode;
		newNode->next = nullptr; 
	}
	// else assign the new node the next node of top node
	else
	{
		newNode->next = top;
		top = newNode;
	}
}

// member function returns true if the stack is empty,
// return false is the stack is not empty
template <class T>
bool DynamicStack<T>::isEmpty()
{
	bool status;
	if (top)
		status = false;
	else
		status = true;

	return status;
}
#endif
