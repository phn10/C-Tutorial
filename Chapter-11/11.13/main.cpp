#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Drinks
{
	string name;
	double cost;
	int number;
};

double buyDrinks(Drinks *); // chose what kind of drink user want to buy
                            // will return money earned from this transaction
void displayDrinks(Drinks *); // display the content of the table

int main()
{
	char order;
	double total = 0;
	Drinks type[5] = {{"Cola      ", 0.75, 20},
					          {"Root Beer ", 0.75, 20},
					          {"Lemon-Lime", 0.75, 20},
					          {"Grape Soda", 0.80, 20},
					          {"Cream Soda", 0.80, 20}};
	displayDrinks(type);
	
	do
	{
		cout << "Do you want to buy any drinks? ('Y' / 'N') ";
		cin >> order;
		while (order != 'n' && order != 'N' &&
			   order != 'y' && order != 'Y')
		{
			cout << "ERROR: Invalid input, enter 'Y' or 'N': ";
			cin >> order;
		}
		if (order == 'n' || order == 'N') break;
		total += buyDrinks(type);
	} while (order == 'y' || order == 'Y');

	displayDrinks(type);
	cout << "\nThe money this machine earned: $" << total << endl;
	cin.get();
	cin.get();
	return 0;
}

void displayDrinks(Drinks *type)
{
	cout << "-----------------------------------------------------------\n";
	cout << "Drink Name\t\tCost\t\tNumber in Machine" << endl;
	cout << "-----------------------------------------------------------\n";
	for (int index = 0; index < 5; index++)
	{
		cout << type[index].name << "\t\t" 
			 << type[index].cost << "\t\t" 
			 << type[index].number << endl;
	}
	cout << endl;
}

double buyDrinks(Drinks *type)
{
	bool found = false;
	int index;
	int num;
	double sum;
	double cash;
	string input;
	cout << "Enter name of drink: ";
	cin.ignore();
	getline(cin, input);
	for (index = 0; index < 5; index++)
		if (type[index].name.find(input) != string::npos) // if condition to find if the input name is contained in the type[index].name
		{
			found = true;
			break;
		}
	if (!found) // if not found
	{
		cout << "There is no drink you want!!" << endl;
		return 0;
	}
	else // if found
	{
		cout << "Enter the number of drink: ";
		cin >> num;
		if (num > type[index].number)
		{
			cout << "Not enought drinks, there are only "
				 << type[index].number << " drinks left" << endl;
			return 0;
		}
		else
		{
			sum = num * type[index].cost;
			cout << "Put in cash: $";
			cin >> cash;
			if (cash < num)
			{
				cout << "Not enought cash!!" << endl;
				return 0;
			}
			else 
			{
				cout << "Return: $" << cash - sum << endl;
				type[index].number = type[index].number - num;
				return sum;
			}
		}
	}
}
