#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	string fileName;
	string input;
	int size = 0;
	cout << "Enter a string [Finish by '#']: ";
	getline(cin, input);

	while(true)
	{
		if (input[size] == '#') break;
		else size++;
	}

	// encrypt the file switch the last
	for (int count = 0; count < size; count++)
	{
		if (input[count] >= 65 && input[count] <= 122)
			input[count] = 122 - input[count] + 65;
		else if (input[count] >= 32 && input[count] <= 47)
			input[count] = 65 + rand() % (122 - 65);
	}
	
	cout << "Address: " << &input << endl;
	cout << "Enter file's name to save: ";
	getline(cin, fileName);

	// there are two ways to write a string to a file
	// 1. use file.put(ch) with file is fstream object and
	//    ch is a char
	// 2. use file.write(&str[0], size), with &str[0] is the 
	//    address of the first string, size is the size of
	//    string of characters.
	// In this example, I use 2nd way.

	fstream outputFile(fileName, ios::out);
	outputFile.write(&input[0], size);
	outputFile.close();

	cin.get();
	cin.get();
	return 0;
}
