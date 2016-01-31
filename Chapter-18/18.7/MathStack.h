#ifndef MATHSTACK_H
#define MATHSTACK_H
#include "DynamicStack.h"

template <class T>
class MathStack : public DynamicStack<T>
{
	public:
		MathStack() : DynamicStack() {}

		void mult();
		void div();
		void addAll();
		void multAll();
};

template <class T>
void MathStack<T>::mult()
{
	T first;
	T second;
	pop(first);
	pop(second);
	if (isEmpty())
		cout << "The stack is empty" << endl;
	else
	{
		first = first * second;
		push(first);
	}
}

template <class T>
void MathStack<T>::div()
{
	T first;
	T second;
	pop(first);
	pop(second);
	if (isEmpty())
		cout << "The stack is empty" << endl;
	else
	{
		first = first / second;
		push(first);
	}
}

template <class T>
void MathStack<T>::addAll()
{
	T sum = 0;
	T num;
	if (isEmpty())
		cout << "The stack is empty" << endl;
	else
	{
		while (!isEmpty())
		{
			pop(num);
			sum += num;
		}
		push(sum);
	}
}

template <class T>
void MathStack<T>::multAll()
{
	T sum = 1;
	T num;
	if (isEmpty())
		cout << "The stack is empty" << endl;
	else
	{
		while (!isEmpty())
		{
			pop(num);
			sum *= num;
		}
		push(sum);
	}
}
#endif
