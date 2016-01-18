#ifndef COIN_H
#define COIN_H
#include <string>

class Coin
{
	private:
		double value;
		std::string sideUp;
	public:
		Coin();
		void toss();
		std::string getSideUp();
		double getValue();
		void setValue(double );
		bool checkCoin();
};
#endif
