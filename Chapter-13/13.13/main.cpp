#include <iostream>
#include <string>
#include "Coin.h"

int main()
{
	double sum = 0;
	char ch;
	Coin coin1, coin2, coin3;
	coin1.setValue(0.05);
	coin2.setValue(0.1);
	coin3.setValue(0.25);
	while (sum < 1)
	{
		std::cout << "Your current point is: " << sum << std::endl;
		coin1.toss();
		coin2.toss();
		coin3.toss();
		std::cout << coin1.getValue() << ": " << coin1.getSideUp() << std::endl;
		std::cout << coin2.getValue() << ": " << coin1.getSideUp() << std::endl;
		std::cout << coin3.getValue() << ": " << coin3.getSideUp() << std::endl;
		if (coin1.checkCoin() == true) sum += coin1.getValue();
		if (coin2.checkCoin() == true) sum += coin2.getValue();
		if (coin3.checkCoin() == true) sum += coin3.getValue();
		std::cout << "[ENTER] to toss again!!";
		std::cin.get(ch);
	}
	std::cout << "your point is: " << sum << std::endl;
	if (sum == 1)
		std::cout << "You win!!" << std::endl;
	else
		std::cout << "You lose!!" << std::endl;

	std::cin.get();
	std::cin.get();
	return 0;
}
