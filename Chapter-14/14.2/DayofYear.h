#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H
#include <string>
using namespace std;

class DayofYear
{
	private: 
		string result; // 
		int day; // day in month, ex 
		int month; // index of string array months;
		static int days[12]; // static array to initialize inside class
		static string months[12]; // static array to initialize inside class
	public:
		DayofYear(int ); // member function receive number to compute day and month
		string print(); // member function return the string result <line 10>
};
#endif

