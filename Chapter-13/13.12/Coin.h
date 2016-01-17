#ifndef COIN_H
#define COIN_H
#include <string>

class Coin
{
	private:
		std::string sideUp;
	public:
		Coin();
		void toss();
		std::string getSideUp();
};
#endif
