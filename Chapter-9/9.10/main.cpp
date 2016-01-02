#include <iostream>
using namespace std;

int *reversedArray(int *, int);

int main()
{
	int size;
	cout << "Enter number of element in your array: ";
	cin >> size;

	// dynamically allocate num array
	int *num = nullptr;
	num = new int[size];

	// receive element
	for (int i = 0; i < size; i++)
		cin >> num[i];

	// dynamically allocate reversed array
	int *rvs = nullptr;
	rvs = new int[size];
	
	// reverse array function call
	rvs = reversedArray(num, size);

	cout << "Reversed array: ";
	for (int index = 0; index < size; index++)
		cout << rvs[index] << " ";
	cout << endl;

	// clear array from memory
	delete [] num;
	delete [] rvs;
	num = nullptr;
	rvs = nullptr;
	cin.get();
	cin.get();
	return 0;
}

// function definition
int *reversedArray(int *num, int size)
{
	int *arr = nullptr;
	arr = new int[size];

	for (int index = 0; index < size; index++)
		arr[index] = num[size - 1 - index];

	return arr;
}
