#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void selectSort(double *, int);
double findMedian(double *, int);

int main()
{
	int size = 0;
	double input;
	vector<double> num;
	cout << "Enter array of numbers (-1 to quit): ";
	do
	{
		cin >> input;
		num.push_back(input);
		size += 1;
	} while (input != -1);

	size = size - 1;
	
	double *arr = nullptr;
	arr = new double[size];

	for (int index = 0; index < size; index++)
		arr[index] = num[index];

	selectSort(arr, size);

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
		for (int count = startScan + 1; count < size; count++)
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
