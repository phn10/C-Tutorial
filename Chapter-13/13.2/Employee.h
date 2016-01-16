#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee
{
	private:
		std::string name;
		int id;
		std::string department;
		std::string position;
	public: 
		Employee(std::string, int, std::string, std::string);
		Employee(std::string, int);
		Employee();
		void setName(std::string);
		std::string getName();
		void setID(int);
		int getID();
		void setDepart(std::string);
		std::string getDepart();
		void setPosi(std::string);
		std::string getPosi();
};
#endif
