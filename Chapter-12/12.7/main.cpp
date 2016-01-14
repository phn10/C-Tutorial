#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string outName; // name of the output file
	string inName; // name of input file
	fstream outFile; 
	fstream inFile;
	char input; // a character variable that will store character of input file individually  

	cout << "Enter the name of the input file: ";
	cin.ignore();
	getline(cin, inName);
	cout << "Enter the name of the output file: ";
	cin.ignore();
	getline(cin, outName);

	inFile.open(inName, ios::in);
	outFile.open(outName, ios::out);

	if(inFile)
	{
	  // firstly, we need to get the first character of input file,
	  // capitalize it, and then put it into the output file
		inFile.seekg(0L, ios::cur); // set the pointer to the first character of input file
		inFile.get(input); // get that character
		outFile.seekp(0L, ios::cur); // set the pointer tp the first character of output file
		outFile.put(toupper(input)); // capitalize by toupper member function and put it into output file
		while (inFile.eof() == false) /
		{
			inFile.seekg(0L, ios::cur);
			inFile.get(input);
			outFile.seekp(0L, ios::cur);
			outFile.put(tolower(input)); // decapitalize all character in the middle of the sentences
			
			//*****************************************************************************************
			// when the program meet the '.' character, which indicating the end of the sentence,     *
			// in the output file, we need to put a blank ' ' character next to the current offset,   *
			// then capitalize the next character and put it in the next offset                       *   
			//*****************************************************************************************
			
			if (input == '.')  // when meet the '.' character
			{
				outFile.seekp(0L, ios::cur); 
				outFile.put(' '); // put blank character ' ' to the next offset
				inFile.seekg(1L, ios::cur); //get the character of the next two offset
				inFile.get(input); // store it in input variable
				outFile.seekp(0L, ios::cur); // get the address of the next character
				outFile.put(toupper(input)); // capitalize input variable and put it in the ouput file
			}
		}
		inFile.close(); // close file
		outFile.close(); // close file
	}
	else
		cout << "Cannot open the input file. " << endl;

	cin.get();
	cin.get();
	return 0;
}
