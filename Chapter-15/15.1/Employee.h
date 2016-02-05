#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee
{
	private:
		std::string name;
		int number;
		std::string date;
	public:
		Employee()
		{ name = "";
		  number = 0;
		  date = ""; }

		Employee(std::string n, int num, std::string d)
		{ name = n; number = num; date = d; }

		void setName(std::string n)
		{ name = n; }

		void setNumber(int num)
		{ number = num; }

		void setDate(std::string d)
		{ date = d; }

		std::string getName()
		{ return name; }

		int getNumber()
		{ return number; }

		std::string getDate()
		{ return date; }
};
#endif
