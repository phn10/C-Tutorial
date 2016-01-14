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
	int line = 1; // to count the line up to 24 lines

	cout << "Enter the name of the file: "; 
	cin >> fileName;
	cin.ignore(); // ignore the '\n' at the end of the file name
	file.open(fileName, ios::in);

	if (file)
	{
		getline(file, input);
		while (file)
		{
			cout << line << ": ";
			cout << input << endl;
			getline(file, input);
			line++;
		}
		file.close();
	}
	else
		cout << "Cannot open file.\n"; 

	cin.get();
	cin.get();
	return 0;
}
