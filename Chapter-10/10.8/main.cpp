  #include <iostream>
#include <string>
using namespace std;

int findSum(string);

int main()
{
	int sum;
	string input;
	cout << "Enter an array of number\n"
		 << "and I will find the sum: ";
	getline(cin, input);

	sum = findSum(input);

	cout << "The sum is: " << sum << endl;
	cin.get();
	cin.get();
	return 0;
}

int findSum(string input)
{
	int len = input.length();
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		int temp = input[i] - '0';
		sum += temp;
	}

	return sum;
}
