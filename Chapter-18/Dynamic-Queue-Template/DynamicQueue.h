#ifndef DYNAMICQUEUE_H
#define DYNAMICQUEUE_H
#include <iostream>
using namespace std;

template <class T>
class DynamicQueue
{
	private:
		QueueNode
		{
			T value;
			QueueNode *next;
		}
		QueueNode *front;
		QueueNode *rear;
		int numItems;

	public:	
		DynamicQueue();
		~DynamicQueue();
		void enqueue(T );
		void dequeue(T &);
		bool isEmpty() const;
		void clear();
};

template <class T>
DynamicQueue::DynamicQueue()
{
	front = nullptr;
	rear = nullptr;
	numItems = 0;
}

template <class T>
DynamicQueue::~DynamicQueue()
{
	clear();
}

template <class T>
void DynamicQueue::enqueue(T item)
{
	QueueNode *newNode;
	newNode = new QueueNode;

	newNode->value = item;
	newNode->next = nullptr;

	if (isEmpty())
	{
		front = newNode;
		rear = newNode;
		numItems++;
	}
	else
	{
		rear->next = newNode;
		rear = newNode;
		numItems++;
	}
}

template <class T>
void DynamicQueue::dequeue(T &item)
{
	QueueNode *temp = new QueueNode;

	if (isEmpty())
		cout << "The queue is empty" << endl;
	else
	{
		item = front->value;
		temp = front->next;]
		delete front;
		front = temp;
		numItems--;
	}
}

template <class T>
bool DynamicQueue<T>::isEmpty()
{
	bool status;

	if (numItems > 0)
		status = false;
	else
		status = true;

	return status;
}

template <class T>
void DynamicQueue<T>::clear()
{
	 T value;

	 while (!isEmpty())
		 dequeue(value);
}
#endif
