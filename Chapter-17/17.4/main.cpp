#include <iostream>
#include "NumberList.h"

using namespace std;

int main()
{
	NumberList list;

	list.appendNode(1);
	list.appendNode(2);
	list.appendNode(3);
	list.appendNode(4);
	list.appendNode(5);
	list.appendNode(6);
	list.appendNode(7);
	list.appendNode(8);
	list.appendNode(9);
	list.displayNode();
	cout << endl;

	list.reverseNode();
	list.displayNode();
	cin.get();
	cin.get();
	return 0;
}
