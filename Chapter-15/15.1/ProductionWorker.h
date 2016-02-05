#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"
#include <iostream>

class ProductionWorker : public Employee
{
	private:
		int shift1, shift2;
		double payRate1, payRate2;
		int shift;
		double payRate;
	public:
		ProductionWorker() : Employee()
		{
			shift1 = 1; shift2 = 2;
			payRate1 = 1.5; payRate2 = 2.0;
		}

		void setShift(int s)
		{
			if (s == shift1)
				shift = shift1;
			else if (s == shift2)
				shift = shift2;
			else
				std::cout << "Invalid value!!" << std::endl;
		}

		void selectRate()
		{
			if (shift == shift1)
				payRate = payRate1;
			else if (shift == shift2)
				payRate = payRate2;
		}

		double getPayRate()
		{ return payRate; }
};
#endif				
