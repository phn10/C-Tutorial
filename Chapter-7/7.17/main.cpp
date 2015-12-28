#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//Function prototype
char getChoice();
int main()
{
	const int size = 1000; // number of names on each lists
	char choice; // choose gender's names
	string names[size]; // array of string to store names on each list
	string input; // string to get input name
	int amount[size]; // array of integer to store number of names
	ifstream inputFile;
	int i = 0;

	choice = getChoice();
	if (choice == 'b') inputFile.open("boynames.txt"); // choice b opens boynames
	if (choice == 'g') inputFile.open("girlnames.txt"); // choice g opens girlnames
	
	if (!inputFile.is_open()) // if statement when cannot read text file
	{
		cout << "ERROR: Cannot load data from file." << endl;
		cin.get();
		cin.get();
		exit(0);
	}
	while (i < size)
	{
		inputFile >> names[i] >> amount[i]; // reading data, names, from text file and store to names and amount array.
		i += 1;
	}
	cout << "Finish reading data" << endl; // read data successfully
	while (true) // infinite loop require users to enter names
	{
		i = 0;
		cout << "Enter name (Enter ""q"" to quit): ";
		cin >> input;
		if (input == "q") break; // Press q to quit the program
		while (input.compare(names[i]) != 0 && i < size)
		{
			i += 1;
			if (i == size) break; // if i == size, then names[i] will be invalid, so we need to break here!
		}
		if (i < size) cout << names[i] << " ranked " << i + 1 << " with " << amount[i] << " names." << endl;
		else cout << input << " is not found." << endl; // when i == size, which means the program read all data but cannot find any similar names
	}

	cin.get();
	cin.get();
	return 0;
}
// function definition
char getChoice() // return char type 'b' for boy, 'g' for girl
{
	char c;
	do 
	{
		cout << "Choose boys' names or girls' names (b/g): ";
		cin >> c;
		if (c != 'b' && c != 'g') cout << "ERROR: Only choice 'b' or 'g' accepted!" << endl;
	} while (c != 'b' && c != 'g');
	return c;
}
