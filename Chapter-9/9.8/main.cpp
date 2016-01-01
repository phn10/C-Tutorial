#include <iostream>
using namespace std;

int countElement(int *, int);

int main()
{
	int *arr = nullptr;
	int size;
	int count;
	int x = 0;
	cout << "Enter number of elements: ";
	cin >> size;
	arr = new int[size];
	cout << "Enter array of number: ";
	for (int index = 0; index < size; index++)
		cin >> arr[index];
	count = countElement(arr, size);
	cout << count << endl;
	
	int **num = new int*[2];
	for (int i = 0; i < 2; i++)
		num[i] = new int[count];
	
	num[0][x] = arr[0];
	x += 1;
	for (int index = 1; index < size; index++)
	{
		bool newElement = true;
		for (int i = 0; i < index; i++)
		{
			if (arr[index] == arr[i])
				newElement = false;
			if (newElement)
			{
				num[0][x] = arr[index];
				cout << "new " << num[0][x] << endl;
				x += 1;
			}
		}
	}



	delete [] arr;
	delete [] num;
	arr = nullptr;
	num = nullptr;

	cin.get();
	cin.get();
	return 0;
}

int countElement(int *arr, int size)
{
	bool newElement;
	int count = 1;
	for (int index = 1; index < size; index++)
	{
		newElement = true;
		for (int i = 0; i < index; i++)
		{
			if (arr[index] == arr[i])
				newElement = false;
		}
		if (newElement) 
		{
			cout << "New element: " << index << endl;
			count += 1;
		}
	}
	return count;
}
