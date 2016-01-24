#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
	NumberList num;
	num.appendNode(1);
	num.appendNode(3);
	num.appendNode(2);
	num.appendNode(10);
	num.appendNode(12);
	num.insertNode(1, 100);
	num.displayList();
	cin.get();
	cin.get();
	return 0;
}
