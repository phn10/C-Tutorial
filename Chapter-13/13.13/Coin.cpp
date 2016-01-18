#include "Coin.h"
#include <string>
#include <cstdlib>
#include <ctime>

Coin::Coin()
{
	srand(time(0));
	toss();
}

void Coin::toss()

{
	std::string values[2] = {"heads", "tails"};
	int i; 
	i = rand() % 2;
	sideUp = values[i];
}

std::string Coin::getSideUp()
{
	return sideUp;
}

double Coin::getValue()
{
	return value;
}

void Coin::setValue(double v)
{
	value = v;
}

bool Coin::checkCoin()
{
	if (sideUp == "heads")
		return true;
	else if (sideUp == "tails")
		return false;
}
