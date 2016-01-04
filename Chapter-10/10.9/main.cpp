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

void findFrequent(string input) // this function search all charactres, from 'a', to 'w', count each, and find the largest one 
{
	vector<int> stats1;
	vector<char> stats2;
	char x;
	int index = 0;
	for (char x = 97; x < 123; x++)
	{
		int i = -1;
		int count = 0;
		while (input.find(x, i + 1) != -1)
		{
			int index = input.find(x, i + 1);
			i = index;
			count++;
		}
		if (count > 0) cout << "Character """ << x << """ has " << count << " occurrences.\n";
		stats1.push_back(count);
		stats2.push_back(x);
		index++;
	}

	int maxIndex;
	int maxCount = stats1[0];
	for (int i = 1; i < index; i++)
	{
		if (maxCount < stats1[i])
		{
			maxCount = stats1[i];
			maxIndex = i;
		}
	}
	cout << "-------------------------------" << endl;
	cout << "The most frequent character is """ << stats2[maxIndex]
	     << """ with " << stats1[maxIndex] << " occurrences.\n";
}
