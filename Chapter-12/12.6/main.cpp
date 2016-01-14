#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string fileName; // name of the file
	string search; // string users want to find in the file
	string input; // read each lines individually
	fstream file; 
	vector<int> lineString; // vector to store the line which has search string
	int line = 1;
	int count = 0;

	cout << "Enter the name of file: ";
	cin >> fileName;
	cin.ignore(); // ignore the '\n' character at the end of the file name
	file.open(fileName, ios::in);
	cout << "Enter the string you want to find: ";
	getline(cin, search);
	cin.ignore();

	// read each line individually, so the delimiter is '\n'
	getline(file, input, '\n'); 
	while(file)
	{
		if (input.find(search) != string::npos)
		{
			count++;
			lineString.push_back(line);
			cout << "Line " << line << ": ";
			cout << input << endl;
		}
		line++;
		getline(file, input, '\n');
	}
	cout << "There are " << count << " occurences" << endl;
	cout << "Lines: ";
	for (int i = 0; i < count; i++)
	{
		cout << lineString[i] << "  ";
	}

	file.close();

	cin.get();
	cin.get();
	return 0;
}


// we can read each sentences or each words individually,
// simply by replacing '\n' by '.' or ' ' as delimiter in
// the getline function
// for example: getline(file, input, '.'); <line 26>
