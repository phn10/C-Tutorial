#include <iostream>
using namespace std;

void arrSelectSort(int *[], int);
void showArrPtr(int *[], int);

int main()
{
	int size;
	cout << "Enter number of donations: ";
	cin >> size;

	// dynamically allocate array of integers
	int *donations = nullptr;
	donations = new int[size];

	// dynamically allocate array of pointers
	int **arr = nullptr;
	arr = new int*[size];

	// assign elements in pointers array to null pointer
	for (int count = 0; count < size; count++)
	{
		arr[count] = nullptr;
	}
	cout << "Enter donations: ";
	for (int count = 0; count < size; count++)
	{
		cin >> donations[count];
		arr[count] = &donations[count]; // get the address of the donation array
	}

	arrSelectSort(arr, size);
	showArrPtr(arr, size);
	cin.get();
	cin.get();
	return 0;
}

void arrSelectSort(int *arr[], int size)
{
	int minIndex, startScan;
	int *minValue;
	for (startScan = 0; startScan < size - 1; startScan++)
	{
		minIndex = startScan;
		minValue = arr[minIndex];
		for (int index = startScan + 1; index < size; index++)
		{
			if (*minValue > *(arr[minIndex]))
			{
				minIndex = index;
				minValue = arr[minIndex];
			}
		}
		arr[minIndex] = arr[startScan];
		arr[startScan] = minValue;
	}
}

void showArrPtr(int *arr[], int size)
{
	cout << "The donations in ascending order: ";
	for (int count = 0; count < size; count++)
	{
		cout << *arr[count] << endl;
	}
	cout << endl;
}
