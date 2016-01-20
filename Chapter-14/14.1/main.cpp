#include <iostream>
#include <string>
#include "Number.h"
using namespace std;

int main()
{
	char num[4] = {'0', '0', '0', '0'};
	int count = 0;
	char n;
	string printResult;


	cout << "Enter number: ";
	while (count < 4)
	{
		cin.get(n);
		if (n == '\n') break;
		num[count] = n;
		count++;
	}

	Number number(num, count);
	printResult = number.printString();

	cout << "Your number is: " << printResult << endl;

	cin.get();
	cin.get();
	return 0;
}
