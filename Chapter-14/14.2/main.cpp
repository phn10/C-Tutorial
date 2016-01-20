#include <iostream>
#include <string>
#include "DayofYear.h"
using namespace std;

int main()
{
	int day;
	string print;
	cout << "Enter day in year: ";
	cin >> day;

	DayofYear dayInYear(day);
	print = dayInYear.print();
	
	cout << "Your date is: " << print << endl;

	cin.get();
	cin.get();
	return 0;
}
