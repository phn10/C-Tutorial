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
