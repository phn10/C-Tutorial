#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;

int main()
{
	string name;
	const int SIZE = 5;
	Queue<string> stack(SIZE);
	
	while (!stack.isFull())
	{
		cout << "Enter a name: ";
		getline(cin, name);
		stack.enqueue(name);
	}

	cout << "\nYou entered: " << endl;
	while (!stack.isEmpty())
	{
		stack.dequeue(name);
		cout << name << endl;
	}

	cin.get();
	cin.get();
	return 0;
}
