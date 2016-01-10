#include <iostream>
#include <string>
using namespace std;

struct Sales
{
	string name;
	double first;
	double second;
	double third;
	double fourth;
	double total;
	double average;
};

Sales receiveData();
void showData(Sales);

const int num = 4;

int main()
{
	Sales division[num];
	for (int index = 0; index < num; index++)
	{
		cout << "Enter data for division " << index + 1 << ": " << endl;
		division[index] = receiveData();
		cout << endl;
	}
	for (int index = 0; index < num; index++)
	{   
		cout << "Division " << index + 1 << ": " << endl;
		showData(division[index]);
		cout << endl;
	}

	cin.get();
	cin.get();
	return 0;
}

Sales receiveData()
{
	Sales data;
	cout << "Name: ";
	cin.ignore();  // ignore '\n' character
	getline(cin, data.name);
	cout << "First-Quater Sales: $";
	cin >> data.first;
	cout << "Second-Quater Sales: $";
	cin >> data.second;
	cout << "Third-Quater Sales: $";
	cin >> data.third;
	cout << "Fourth-Quater Sales: $";
	cin >> data.fourth;
	data.total = (data.first + data.second + 
				   data.third + data.fourth);
	data.average = data.total / 4;
	return data;
}

void showData(Sales data)
{
	cout << "Name: " << data.name << endl;
	cout << "Total Sales: $" << data.total << endl;
	cout << "Average Sales: $" << data.average << endl;
}
