#include <iostream>
using namespace std;

int dosomething(int *, int *);

int main()
{
	int *x;
	int *y;

	x = nullptr; y = nullptr;
	x = new int;
	y = new int;
	
	cout << "Enter x, y: "; 
	cin >> *x >> *y;

	cout << "The result is: " << dosomething(x, y) << endl;

	delete x;
	delete y;

	cin.get();
	cin.get();
	return 0;
}

int dosomething(int *x, int *y)
{
	int temp = *x;
	*x = *y * 10;
	*y = temp * 10;
	return *x + *y;
}
