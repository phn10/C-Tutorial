#ifndef INVENTORYQUEUE_H
#define INVENTORYQUEUE_H
#include <string>
using namespace std;

class InventoryQueue
{
	private:
		struct QueueNode
		{
			QueueNode *next;
			string serialNumber;
			string date;
			string partLot;
		};
		QueueNode *front;
		QueueNode *rear;
		int numItems;
	
	public:
		InventoryQueue()
		{
			front = nullptr;
			rear = nullptr;
			numItems = 0;
		}
		~InventoryQueue();
		void enqueue(string, string, string);
		void dequeue(string &, string &, string &);
		void display();
		bool isEmpty();
};
#endif
