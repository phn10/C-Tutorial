#include <iostream>
#include <string>
using namespace std;

const int size = 12;

struct Weather
{
	int rain;
	int highTemp;
	int lowTemp;
	double averTemp;
};

enum Months {JANUARY, FEBUARY, MARCH, APRIL, MAY, JUNE,
			 JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, 
			 DECEMBER}; 

void showMonth(Months );

// because struct is stored in memory in one location
// we understand array of struct is a normal array
void processData(Weather []); 
// or void processData(Weather *);

int main()
{	
	Weather data[size];
	Months index;
	for (index = JANUARY; index <= DECEMBER; 
		 index = static_cast<Months>(index + 1))
	{
		cout << "Enter data for "; 
		showMonth(index); cout << ": " << endl;
		cout << "Rain Fall: "; cin >> data[index].rain;
		cout << "Highest Temperature: "; cin >> data[index].highTemp;
		cout << "Lowest Temperature: "; cin >> data[index].lowTemp;
		cout << "Average Temperature: "; cin >> data[index].lowTemp;
	}
	processData(data);

	cin.get();
	cin.get();
	return 0;
}

void showMonth(Months index)
{
	switch(index)
	{
		case JANUARY  : cout << "January"; break;
		case FEBUARY  : cout << "Febuary"; break;
		case MARCH    : cout << "March"; break;
		case APRIL    : cout << "April"; break;
		case MAY      : cout << "May"; break;
		case JUNE     : cout << "June"; break;
		case JULY     : cout << "July"; break;
		case AUGUST   : cout << "August"; break;
		case SEPTEMBER: cout << "September"; break;
		case OCTOBER  : cout << "October"; break;
		case NOVEMBER : cout << "November"; break;
		case DECEMBER : cout << "December";
	}
}

void processData(Weather data[])
{
	int totalRain = 0;
	double averRain;
	int highestTemp = data[0].highTemp;
	int lowestTemp = data[0].lowTemp;
	
	for (int index = 0; index < size; index++)
	{
		totalRain += data[index].rain;
		if (highestTemp < data[index].highTemp)
			highestTemp = data[index].highTemp;
		if (lowestTemp > data[index].lowTemp)
			lowestTemp = data[index].lowTemp;
	}
	averRain = totalRain / size;
	cout << "Total Rain: " << totalRain << endl;
	cout << "Average Rain: " << averRain << endl;
	cout << "Highest Temperature: " << highestTemp << endl;
	cout << "Lowest Temperature: " << lowestTemp << endl;
}	
