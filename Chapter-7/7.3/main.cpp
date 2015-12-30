#include <iostream>
#include <vector>
#include <string>

using namespace std;
const int types = 5;

void receiveData(int [], string []);
void processing(int [], string [], int &, int &, int &);
void showData(int [], string [], int, int, int);

int main()
{
	string names[] = {"mild", "medium", "sweet", "hot", "zesty"};
	int sales[5];
	int highestIndex;
	int lowestIndex;
	int total;

	receiveData(sales, names); 
	processing(sales, names, highestIndex, lowestIndex, total);
	showData(sales, names, highestIndex, lowestIndex, total);

	cin.get();
	cin.get();
	return 0;
}


void receiveData(int sales[], string names[])
{
	for (int i = 0; i < types; i++)
	{
		string name;
		cout << "Enter the sales of " << names[i] << ": ";
		cin >> sales[i];
	}
}

void processing(int sales[], string names[], int &highestIndex, int &lowestIndex, int &total)
{
	total = 0;
	highestIndex = 0;
	lowestIndex = 0;
	int highest = sales[0];
	int lowest = sales[0];
	for (int i = 1; i < types; i++)
	{
		if (highest < sales[i])
		{
			highest = sales[i]; 
			highestIndex = i;
		}
		if (lowest > sales[i]) 
		{
			lowest = sales[i]; 
			lowestIndex = i;
		}
		total += sales[i];
	}
}

void showData(int sales[], string names[], int highestIndex, int lowestIndex, int total)
{
	cout << "Salsa\t\tSales" << endl;
	cout << "------\t\t------" << endl;
	for (int i = 0; i < types; i++)
	{
		cout << names[i] << "\t\t" << sales[i] << endl;
	}
	cout << "----------------------" << endl;
	cout << "Highest product is " << names[highestIndex] << ", with " << sales[highestIndex] << endl;
	cout << "Lowest product is " << names[lowestIndex] << ", with " << sales[lowestIndex] << endl;
	cout << "Total product is: " << total << endl;
}
