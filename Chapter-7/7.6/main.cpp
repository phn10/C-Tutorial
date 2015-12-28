#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	const int days = 30;
	const int months = 3;
	string names[3] = {"June  ", "July  ", "August"};
	string weathers[months][days];
	ifstream myFile;
	int count = 0;
	myFile.open("weather.txt");
	
	for (int x = 0; x < months; x++)
		for (int y = 0; y < days; y++)
			myFile >> weathers[x][y];

	for (int x = 0; x < months; x++)
	{
		cout << names[x] << ": ";
		for (int y = 0; y < days; y++)
		{
			cout << weathers[x][y] << "  ";
		}
		cout << endl;
	}


	cout << endl;
	cout << endl;
	
	int s[3];
	int c[3];
	int r[3];
	for (int x = 0; x < months; x ++)
	{
		s[x] = 0;
		c[x] = 0;
		r[x] = 0;
		cout << names[x] << ": ";
		for (int y = 0; y < days; y++)
		{
			if (weathers[x][y] == "s" || weathers[x][y] == "S") s[x] += 1;
			if (weathers[x][y] == "c" || weathers[x][y] == "C") c[x] += 1;
			if (weathers[x][y] == "r" || weathers[x][y] == "R") r[x] += 1;
		}
		cout << s[x] << " days sunny, " << c[x] << " days cloudy, " << r[x] << " days rainy." << endl;
	}
	int index1 = 0; int index2 = 0; int index3 = 0;
	int highest1 = s[0];
	int highest2 = r[0];
	int highest3 = c[0];
	for (int i = 1; i < months; i++)
	{	
		if (s[i] > highest1){highest1 = s[i]; index1 = i;}
		if (c[i] > highest1){highest1 = c[i]; index2 = i;}
		if (r[i] > highest1){highest1 = r[i]; index3 = i;}
	}

	cout << names[index1] << " has the highest sunny days with: " << highest1 << " days." << endl;
	cout << names[index2] << " has the highest cloudy days with: " << highest2 << " days." << endl;
	cout << names[index3] << " has the highest rainny days with: " << highest3 << " days." << endl;

	myFile.close();
	cin.get();
	cin.get();
	return 0;
}
