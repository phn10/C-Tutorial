#include "DayofYear.h"
#include <string>
#include <sstream>
using namespace std;

int DayofYear::days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string DayofYear::months[12] = {"January", "February", "March", "April", "May",
							   "June", "July", "August", "September", "October",
							   "November", "December"};


//*********************************************************************
// this member function first compare the day to the number of day    *
// of the first month, January. If day is bigger than number of day   *
// in January, 31, day will keep subtract to that number, and then    *
// compare to the next month. If day smaller than the number of day   *
// in month, keep return that number and return the month             *
//*********************************************************************

DayofYear::DayofYear(int d)
{
	for (int i = 0; i < 12; i++)
	{
		if (d > days[i]) 
			d -= days[i];
		else
		{
			month = i;
			day = d;
			break;
		}
	}
}
string DayofYear::print()
{
	// stringstream
	stringstream out;
	out << day;

	// convert an integer day to string d
	string d = out.str();
	
	// at the beginning, result = "";
	result.append(months[month]); //result = "Febuary"
	result.append(" ");			  // result = "Febuary "
	result.append(d);             // result = "Febuary 28"
	
	return result;
}
