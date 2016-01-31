#ifndef INVENTORYSTACK_H
#define INVENTORYSTACK_H
#include <string>
#include <iostream>
using namespace std;

class InventoryStack
{
	private:
		struct StackNode
		{
			StackNode *next;
			string serialNumber;
			string date;
			string partLot;
		};
		StackNode *top;
		int numItems;

	public:
		InventoryStack()
		{ top = nullptr;
		  numItems = 0; }
		~InventoryStack();
		void push(string, string, string );
		void pop(string &, string &, string & );
		void display();
		bool isEmpty();
};
#endif
