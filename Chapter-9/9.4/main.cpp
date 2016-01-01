#include <iostream>
#include <string>
using namespace std;

void sortSelectArr(int *, string *, int);
void showArr(int *, string *, int);

int main()
{
	int size;
	cout << "Enter number of students: ";
	cin >> size;
	int *scores = nullptr;
	string *names = nullptr;
	scores = new int[size];
	names = new string[size];
	for (int index = 0; index < size; index++)
	{
		cout << "Enter name and grade of student #" << index + 1 << ": ";
		cin >> names[index] >> scores[index];
	}

	sortSelectArr(scores, names, size);
	showArr(scores, names, size);

	cin.get();
	cin.get();
	return 0;
}

void sortSelectArr(int *scores, string *names, int size)
{
	int startScan, maxIndex, maxValue;
	string tempNames;
	for (startScan = 0; startScan < size - 1; startScan++)
	{
		maxIndex = startScan;
		maxValue = scores[maxIndex];
		tempNames = names[maxIndex];
		for (int index = startScan + 1; index < size; index++)
		{
			if (maxValue < scores[index])
			{
				maxIndex = index;
				maxValue = scores[maxIndex];
			}
		}
		scores[maxIndex] = scores[startScan];
		scores[startScan] = maxValue;
		names[maxIndex] = names[startScan];
		names[startScan] = tempNames;
	}
}

void showArr(int *scores, string *names, int size)
{
	cout << "Grades showed in descending order\n\n";
	cout << "STD\tNames\t\tScores\n";
	cout << "---------------------------------";
	for (int count = 0; count < size; count++)
	{
		cout << count + 1 << "\t" << names[count] << "\t\t" << scores[count] << endl;
	}
}
