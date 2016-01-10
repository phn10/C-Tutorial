#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
	string title;
	string director;
	int year;
	int times;
};

void showData(MovieData *);

int main()
{
	const int num = 2;

	// Initializing an array of struct
	MovieData movies[num] =
		{{"Kungfu Hustle", "Steven Chow", 2004, 190},
		{"Buddha", "Osamu Tezuka", 1997, 240}};

	// for loop to display the content of the array
	for (int index = 0; index < num; index++)
	{
		cout << "Movies #" << index + 1 << ": " << endl;
		showData(&movies[index]);
		cout << endl;
	}

	cin.get();
	cin.get();
	return 0;
}

// take pointer to a struct as an argument
void showData(MovieData *movies)
{
	cout << "Title: " << movies->title << endl;
	cout << "Director: " << movies->director << endl;
	cout << "Year Release: " << movies->year << endl;
	cout << "Times in minutes: " << movies->times << endl;
}
