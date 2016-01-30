#include <iostream>
#include <string>
#include "DynamicQueue.h"
using namespace std;

int main()
{
	string name;

	DynamicQueue<string> queue;

	while (true)
	{
		cout << "Enter name: ";
		getline(cin, name);
		if (name == "q") break;
		queue.enqueue(name);
	}
	cout << "\nName in your list: " << endl;
	while (!queue.isEmpty())
	{
		queue.dequeue(name);
		cout << name << endl;
	}
	cin.get();
	cin.get();
	return 0;
}
