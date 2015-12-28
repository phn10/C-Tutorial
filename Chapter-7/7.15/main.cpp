#include <iostream>
#include <vector>
using namespace std;
//Prototype
bool checkPIN(vector<int>, vector<int>, int);

int main()
{
	const int size = 7;
	//Initialize arrays:
	int pin1Array[size] = {1, 2, 3, 4, 5, 6, 7};
	int pin2Array[size] = {2, 3, 4, 6, 1, 2, 5};
	int pin3Array[size] = {1, 1, 1, 5, 6, 9, 8};
	//Emulate vector by array:
	vector<int> pin1(&pin1Array[0], &pin1Array[0] + size);
	vector<int> pin2(&pin2Array[0], &pin2Array[0] + size);
	vector<int> pin3(&pin3Array[0], &pin3Array[0] + size);

	if (checkPIN(pin1, pin2, size)) 
		cout << "ERROR: pin1 and pin2 report to be the same." << endl;
	else
		cout << "SUCCESS: pin1 and pin2 are different." << endl;
	if (checkPIN(pin2, pin3, size))
		cout << "ERROR: pin2 and pin3 report to be the same." << endl;
	else
		cout << "SUCCESS: pin2 and pin3 are different." << endl;
	if (checkPIN(pin1, pin1, size))
		cout << "SUCCESS: pin1 and pin1 report to be the same." << endl;
	else
		cout << "ERROR: pin1 and pin1 are different." << endl;

	cin.get();
	cin.get();
	return 0;
}
//Function definition, receive two vector as arguments, 
//named pin1 and pin2
bool checkPIN(vector<int> pin1, vector<int> pin2, int size)
{
	for (int i = 0; i < size; i++)
		if (pin1[i] != pin2[i])
			return false;
	return true;
}
