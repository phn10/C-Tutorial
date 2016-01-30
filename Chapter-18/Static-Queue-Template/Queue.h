#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
using namespace std;

template <class X>
class Queue
{
	private:
		X *queueArray;
		int queueSize;
		int front;
		int rear;
		int numItems;
	public:
		Queue (int);
		Queue (const Queue &);
		~Queue();
		void enqueue(X );
		void dequeue(X &);
		bool isEmpty() const;
		bool isFull() const;
		void clear();
};

template <class X>
Queue<X>::Queue(int s)
{
	queueArray = new X[s];
	queueSize = s;
	front = -1;
	rear = -1;
	numItems = 0;
}

template <class X>
Queue<X>::Queue(const Queue &obj)
{
	queueArray = new X[obj.queueSize];
	queueSize = obj.queueSize;
	front = obj.front;
	rear = obj.rear;
	numItems = obj.numItems;
}

template <class X>
Queue<X>::~Queue() 
{
	delete [] queueArray;
}

template <class X>
void Queue<X>::enqueue(X item)
{
	if (isFull())
		cout << "The stack is full " << endl;
	else
	{
		front = (front + 1) % queueSize;
		queueArray[front] = item;
		numItems++;
	}
}

template <class X>
void Queue<X>::dequeue(X &item)
{
	if (isEmpty())
		cout << "The stack is empty " << endl;
	else
	{
		rear = (rear + 1) % queueSize;
		item = queueArray[rear];
		numItems--;
	}
}

template <class X>
bool Queue<X>::isFull() const
{
	bool status;

	if (numItems < queueSize)
		status = false;
	else
		status = true;

	return status;
}

template <class X>
bool Queue<X>::isEmpty() const
{
	bool status;
	
	if (numItems > 0)
		status = false;
	else
		status = true;

	return status;
}

template <class X>
void Queue<X>::clear()
{
	front = -1;
	rear = -1;
	numItems = 0;
}

#endif
