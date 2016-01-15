#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void arrayToFile(string, int*, int);
void fileToArray(string, int*, int);

int main()
{
	int size;
	int *arr = nullptr;
	string fileName;
	int newSize;
	int *newArr = nullptr;

	cout << "Enter the number of numbers in array: ";
	cin >> size;
	arr = new int[size];
	cout  << "Enter the array: ";
	for (int count = 0; count < size; count++)
		cin >> arr[size];

	cout << "Now enter the name of the file you want to save: ";
	cin.ignore();
	getline(cin, fileName);

	cout << "Saving...." << endl;
	arrayToFile(fileName, arr, size);
	cout << "Finish!!" << endl;
	
	cout << "Enter the number you want to get: ";
	cin >> newSize;
	newArr = new int[newSize];
	cout << "Enter the name of the file you want to get data: ";
	cin.ignore();
	getline(cin, fileName);
	fileToArray(fileName, newArr, newSize);

	cout << "Your array: ";
	for (int count = 0; count < newSize; count++)
		cout << newArr[count] << " ";
	cout << endl;

	cin.get();
	cin.get();
	return 0;
}

void arrayToFile(string fileName, int *arr, int size)
{
	fstream outputFile(fileName, ios::out | ios::binary);
	outputFile.write(reinterpret_cast<char *>(arr), size);
	outputFile.close();
}

void fileToArray(string fileName, int *arr, int size)
{
	fstream inputFile(fileName, ios::in | ios::binary);
	inputFile.read(reinterpret_cast<char *>(arr), size);
	inputFile.close();
}

// need to work more
