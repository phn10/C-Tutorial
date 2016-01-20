#include <iostream>
#include <string>
#include "Number.h"
using namespace std;

int main()
{
	string printResult;
	char num[4];
	char n = '0';
	int count = 0;
	cout << "Enter a number: ";
	while(n != '\n')
	{
		cin.get(n);
		num[count] = n;
		count++;
		if (count > 4) break;
	}	
	count = count - 1;
	cout << "return count: " << count << endl;
	Number number(num, 4);
	printResult = number.printString();

	cout << "Your number is: " << printResult << endl;
	
	cin.get();
	cin.get();
	return 0;
}

