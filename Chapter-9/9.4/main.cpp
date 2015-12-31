#include <iostream>
#include <string>
using namespace std;

void sortArray(int [], string [], int);
void showArray(int *, string *, int);
int main()
{
	const int max_size = 20;
	string names[max_size];
	int scores[max_size];
	int size;
	cout << "Enter number of students: ";
	cin >> size;
	for (int count = 0; count < size; count++)
	{
		cout << "Enter name and grade of student #" << count + 1 << ": ";
		cin >> names[count] >> scores[count];
	}
	sortArray(scores, names, size);
	showArray(scores, names, size);

	cin.get();
	cin.get();
	return 0;
}

void sortArray(int scores[], string names[], int size)
{
	string temp;
	int maxIndex, maxValue, startScan;
	for (startScan = 0; startScan < size - 1; startScan++)
	{
		maxIndex = startScan;
		maxValue = scores[maxIndex];
		temp = names[maxIndex];
		for (int index = startScan + 1; index < size; index++)
		{
			if (maxValue < scores[index])
			{
				maxIndex = index;
				maxValue = scores[maxIndex];
				temp = names[maxIndex];
			}
		}
		scores[maxIndex] = scores[startScan];
		scores[startScan] = maxValue;
		names[maxIndex] = names[startScan];
		names[startScan] = temp;
	}
}

void showArray(int *scores, string *names, int size)
{
	cout << "The scores in descending order: " << endl << endl;
	cout << "STT\tNames\t\tScore" << endl;
	cout << "------------------------------" << endl;
	for (int count = 0; count < size; count++)
	{
		cout << count + 1 << "\t" << names[count] << "\t\t" << scores[count] << endl;
	}
}
