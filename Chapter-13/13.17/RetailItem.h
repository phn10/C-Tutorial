#ifndef RETAILITEM_H
#define RETAILITEM_H
#include <string>

class RetailItem
{
	private:
		std::string desc;
		int units;
		double price;
	public:
		RetailItem(std::string d, int u, double p)
		{ desc = d; units = u; price = p; }  
		void setDescription(std::string d)
		{ desc = d; }
		void setUnits(int u)
		{ units = u; }
		void setPrice(double p)
		{ price = p; }
		std::string getDescription()
		{ return desc; }
		int getUnits()
		{ return units; }
		double getPrice()
		{ return price; }
		void subTractUnits(int u)
		{ units = units - u; }
};
#endif
