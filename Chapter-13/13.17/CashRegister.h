#ifndef CASHREGISTER_H
#define CASHREGISTER_H

class CashRegister
{
	private:
		int item;
		int quantity;
		double cost;
	public:
		void setItem(int i)
		{ item = i; }
		void setQuantity(int q)
		{ quantity = q; }
		void setCost(double c)
		{ cost = c; }
		double getSubTotal()
		{ return (cost * 130 / 100 * quantity); }
		double getTax()
		{ double subTotal = getSubTotal();
		  return (subTotal * 6 / 100); }
		double getTotal()
		{ double subTotal = getSubTotal();
		  double tax = getTax();
		  return subTotal + tax; }
};
#endif
