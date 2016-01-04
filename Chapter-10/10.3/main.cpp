#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;

int wordCount(char *);
int wordCount(string); // overload function receive string type

int main()
{
	int count;
	const int STR_SIZE = 80;
	char input1[STR_SIZE];
	string input2;

	cout << "Enter a string: ";
	// cin.getline(input1, STR_SIZE);
	getline(cin, input2);

	// count = wordCount(input1);
	count = wordCount(input2);

	cout << "The string has " << count << " words.\n";

	cin.get();
	cin.get();
	return 0;
}

int wordCount(char *input)
{
	int count = 0,
		index = 0;
	while (input[index] != '\0')
	{
		index++;
		if (isspace(input[index]) != 0) count++;
	}

	return count + 1;
}

int wordCount(string input)
{
	int count = 0,
		index = 0;
	int total = input.length();
	for (int index = 0; index < total; index++)
	{
		if (input.at(index) == ' ')
			count++;
	}
	return count + 1;
}
