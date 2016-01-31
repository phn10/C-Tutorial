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
		void push(T );
		void pop(T & );
		bool isEmpty() const;
};

template <class T>
DynamicStack<T>::~DynamicStack()
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

template <class T>
void DynamicStack<T>::push(T item)
{
	StackNode *nodePtr;

	nodePtr = new StackNode;
	nodePtr->value = item;

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
}

template <class T>
void DynamicStack<T>::pop(T &item)
{
	StackNode *nodePtr;

	if (isEmpty())
		cout << "The stack is empty " << endl;
	else
	{
		nodePtr = top;
		item = nodePtr->value;
		nodePtr = top->next;
		delete top;
		top = nodePtr;
	}
}

template <class T>
bool DynamicStack<T>::isEmpty() const
{
	bool status;

	if(top)
		status = false;
	else
		status = true;

	return status;
}
#endif
