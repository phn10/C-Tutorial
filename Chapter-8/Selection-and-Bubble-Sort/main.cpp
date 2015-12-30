#include <iostream>
using namespace std;
//function prototype
void bubbleSort(int [], int);
void selectSort(int [], int);

int main()
{
	char choice, // c 
	     again;
	const int size = 10;
	do 
	{
		int num[size] = {1, 52, 62, 12, 67, 86, 44, 90, 77, 33};
	  // print elements before sorting
		cout << "Before sorting: ";
		for (int i = 0; i < size; i++)
			cout << num[i] << " "; cout << endl;
	  // choose bubble sort or selection sort
		cout << "Selection sort or Bubble sort? ('s' or 'b'): ";
		cin >> choice;
		if (choice == 's')
			selectSort(num, size);
		else 
			bubbleSort(num, size);
		// print elements after sorting
		cout << "After sort: ";
		for (int i = 0; i < size; i++)
			cout << num[i] << " "; cout << endl;
		cout << "Again? (y / n): ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
	
	cin.get();
	cin.get();
	return 0;
}

//***********************************************************************
// Definition of function bubble sort.                                  *
// Set default swap to false.                                           *
// Compare two nearest elements. If former element is bigger than later *   
// element, swap the positions of two element, and set swap to true.    *
// The while loop will check wether swap is true or false, if true, the *
// loop will start over again. If false, the array is sorted.           *
//***********************************************************************

void bubbleSort(int num [], int size)
{
	bool swap;
	int temp;
	do
	{
		swap = false; // set swap to false, means there is no swap yet
		for (int i = 0; i < size; i++)
		{
			if (num[i] > num[i + 1]) // compare two nearest elements
			{                        // if true, swap their positions
				temp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = temp;
				swap = true; // set swap to true
			}
		}
	} while (swap); // if swap is true, the code will run again from line 55
}

//***********************************************************************
// Definition of function selection sort.                               *
//                                                                      *
//                                                                      *  
//***********************************************************************

void selectSort(int num [], int size)
{
	int startSort, 
	    minValue, // smallest elements in the array from startSort index to the last index   
	    minIndex; // index of the smallest element
	for (startSort = 0; startSort < size - 1; startSort++)
	{
		minIndex = startSort;     // set minIndex as the startSort index
		minValue = num[minIndex]; // set minValue as the element of minIndex 
		for (int index = startSort + 1; index < size; index++) // find the smallest elements of the rest array
		{
			if (minValue > num[index]) // if statement to find the smaller element 
			{
				minValue = num[index];
				minIndex = index;
			}
		}
		num[minIndex] = num[startSort]; // if true, swap the positions of the smallest element to the start sort index
		num[startSort] = minValue;
	}
}
