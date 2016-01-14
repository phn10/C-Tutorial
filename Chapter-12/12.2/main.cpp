#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	char ch;
	string fileName;
	string input;
	fstream file;
	int line; // to count the line up to 24 lines

	cout << "Enter the name of the file: "; 
	cin >> fileName;
	cin.ignore(); // ignore the '\n' at the end of the file name
	file.open(fileName, ios::in);

	if (file) // if can open the file
	{
		getline(file, input, '\n'); // read a line in the file and put into input string
		while (file) // while true
		{
			line = 1;
			while (line <= 24)
			{
				cout << input << endl;
				getline(file, input);
				line++; // count up to 24
			}
			cout << "Enter the continue: ";
			cin.get(ch);
		}
	}
	else 
		cout << "Cannot open the file!" << endl;

	cin.get();
	cin.get();
	return 0;
}
