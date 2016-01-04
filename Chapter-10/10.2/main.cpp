#include <iostream>
#include <cstring>
using namespace std;

const int STR_SIZE = 80;

void convertString(char *, char *);

int main()
{
	char string[STR_SIZE]; // string to store the input
	char string1[STR_SIZE]; // string to store the reversed string

	cout << "Enter a string: ";
	cin.getline(string, STR_SIZE);
	cout << "You entered: " << string1 << endl;
	convertString(string, string);
	cout << "The reversed string is: " << string1 << endl;

	cin.get();
	cin.get();
	return 0;
}

void convertString(char *string, char *string1)
{
	int num_size = 0;
	int index = 0;

	while (string[index] != '\0') // find the total characters
	{
		num_size++;
		index++;
	}
	cout << "num_size: " << num_size << endl;
	for (int index = 0; index < num_size; index++)
	{
		string1[index] = string[num_size - 1 - index];
	}
	string1[num_size] = '\0'; // assign the null character to finish the string
}

// Q: This function cannot work when use returning pointer
// from sub function.
// Q: Cannot use "string" alone,
// ex: convertString(string, string) (line 17)
