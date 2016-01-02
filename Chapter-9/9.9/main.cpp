#include <iostream>
#include <iomanip>
using namespace std;

void selectSort(double *, int);
double findMedian(double *, int);

int main()
{
	int size;
	double *arr = nullptr;

	cout << "Enter number of integer: ";
	cin >> size;
	arr = new double[size];
	cout << "Enter array of number: ";

	for (int count = 0; count < size; count++)
		cin >> arr[count];

	cout << "The median of this array is: ";
	cout << findMedian(arr, size) << endl;

	delete [] arr;
	arr = nullptr;
	cin.get();
	cin.get();
	return 0;
}

void selectSort(double *arr, int size)
{
	int startScan, minIndex;
	double minValue;
	for (startScan = 0; startScan < size - 1; startScan++)
	{
		minIndex = startScan;
		minValue = arr[minIndex];
		for (int count = 0; count < size; count++)
		{
			if (minValue > arr[count])
			{
				minIndex = count;
				minValue = arr[minIndex];
			}
		}
		arr[minIndex] = arr[startScan];
		arr[startScan] = minValue;
	}
}

double findMedian(double *arr, int size)
{
	if (size % 2 == 0)
		return (arr[size / 2] + arr[size / 2 - 1]) / 2;
	else
		return arr[size / 2];
}
