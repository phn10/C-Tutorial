#include <iostream>
#include "MathStack.h"
#include "DynamicStack.h"
using namespace std;

int main()
{
	MathStack<double> stack;
	double numb;

	cout << "Now pushing: " << endl;
	for (numb = 1; numb < 6; numb++)
	{
		cout << "Pushing " << numb << endl;
		stack.push(numb);
	}

	cout << "Multiplying all" << endl;
	stack.multAll();
	stack.pop(numb);
	cout << "The result is: " << numb << endl;

	cin.get();
	cin.get();
	return 0;
}
