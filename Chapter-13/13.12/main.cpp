#include <iostream>
#include <string>
#include "Coin.h"

int main()
{
	Coin coin;
	for (int i = 0; i < 20; i++)
	{
		coin.toss();
		std::cout << coin.getSideUp() << std::endl;
	}

	std::cin.get();
	std::cin.get();
	return 0;
}
