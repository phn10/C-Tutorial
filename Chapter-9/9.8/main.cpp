#include <iostream>
#include <vector>
using namespace std;

int main()
{	
	// initialize variables
	int total; // number of different elements in the array 
	int size; // number of elements of the input array
	int *num = nullptr; // dynamically allocate num array which stores input elements
	vector<int> vec; // create vec vector which store only distinct elements;
	int *count = nullptr; // dynamically allocate count array which stores the occurences of each elements in num array
	
	
	cout << "Enter number of elements in array: ";
	cin >> size;

	num = new int[size]; 
	cout << "Enter array: ";
	
	// get input element
	for (int index = 0; index < size; index++)
		cin >> num[index];
	
	
	// set the first element of the vec vector as the first element of the num array
	vec.push_back(num[0]); 
	total = 1; 
	
	// set the entire vec vector
	for (int index = 1; index < size; index++)
	{
		bool foundNew = true;
		
		// condition when getting a new element
		for (int i = 0; i < index; i++)
			if (num[index] == num[i]) foundNew = false;
		if (foundNew) // if found new element
		{
			vec.push_back(num[index]); // push back the vec vector
			total += 1;
		}
	}

	count = new int[total];

	// set up the count array
	// if the for loop get a repeated element, 
	// the program will increase the coressponding element to 1
	for (int index = 0; index < total; index++)
	{
		count[index] = 0;
		for (int i = 0; i < size; i++)
		{
			if (vec[index] == num[i])
				count[index] += 1;
		}
	}

	// find the maximum element in te count array
	int maxCount = count[0];
	int maxIndex = 0;
	for (int i = 1; i < total; i++)
	{
		if(maxCount < count[i])
		{
			maxCount = count[i];
			maxIndex = i;
		}
	}
	
	// print out the result
	cout << "The most frequent element is: ";
	cout << vec[maxIndex];
	cout << ", with " << maxCount << " occurences.\n";

	// clear the memory
	delete [] num;
	delete [] count;
	num = nullptr;
	count = nullptr;
	
	cin.get();
	cin.get();
	return 0;
}
