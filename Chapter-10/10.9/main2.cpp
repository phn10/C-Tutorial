#include <iostream>
#include <string>
#include <vector>
using namespace std;

void findFrequent(string);

int main()
{
	string input;
	cout << "Enter a string: ";
	getline(cin, input);

	findFrequent(input);

	cin.get();
	cin.get();
	return 0;
}

void findFrequent(string input)
{
	vector<int> stats1;
	vector<char> stats2;
	int index;
	
	for (index = 1; index < input.length(); index++)
	{
		int count = 1;
		for (int i = 0; i < index; i++)
		{
			if (input[index] == input[i]) count++;
		}
		stats1.push_back(count);
		stats2.push_back(input[index]);
	}
	int maxCount = stats1[0];
	int maxIndex;
	for (int i = 1; i < stats1.size(); i++)
	{
		if (maxCount < stats1[i])
		{
			maxCount = stats1[i];
			maxIndex = i;
		}
	}
	cout << "Most frequent character is " << stats2[maxIndex] << " with "
		 << stats1[maxIndex] << " occurences.\n";
}
