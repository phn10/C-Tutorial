#include <iostream>
#include <cstring>
using namespace std;

int countChar(char *);

int main()
{
	const int STR_SIZE = 20;
	char string[STR_SIZE];
	int num;

	cout << "Enter a string: ";

	// getline member function which get the
	// whole line of input, including the [SPACE]
	cin.getline(string, STR_SIZE);
	num = countChar(string);
	cout << "The number of characters: " << num << endl;

	cin.get();
	cin.get();
	return 0;
}

int countChar(char *string)
{
	int num = 0;
	int index = 0;
	while (string[index] != '\0')
	{
		index++;
		num++;
	}

	return num;
}
