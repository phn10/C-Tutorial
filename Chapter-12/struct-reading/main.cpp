#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int DESC_SIZE = 30;

struct InventoryItem
{
	char desc[DESC_SIZE];
	int qty;
	int price;
};

void readFile(InventoryItem , fstream &, int );
void writeFile(InventoryItem , fstream & , int );

int main()
{
	int itemNum;
	string fileName("Inventory.dat");
	InventoryItem item = {" ", 0, 0};
	fstream file(fileName, ios::in | ios::out | ios::binary);
	char go;

	do
	{
		cout << "Do you want to write or read or quit: ";
		cin.ignore();
		cin.get(go);
		cout << "Enter the inventory number: ";
		cin >> itemNum;
		if (go == 'r')
			readFile(item, file, itemNum);
		else if (go == 'w')
			writeFile(item, file, itemNum);
	} while (go != 'q');

	file.close();

	cin.get();
	cin.get();
	return 0;
}

void readFile(InventoryItem item, fstream &file, int itemNum)
{
	file.clear();
	file.seekg(itemNum * sizeof(item), ios::beg);
	file.read(reinterpret_cast<char *>(&item), sizeof(item));
	cout << "Item number " << itemNum << ": " << endl;
	cout << "Description: " << item.desc << endl;
	cout << "Quantity: " << item.qty << endl;
	cout << "Price: " << item.price << endl;
}

void writeFile(InventoryItem item, fstream &file, int itemNum)
{
	file.clear();
	file.seekp(itemNum * sizeof(item), ios::beg);
	cout << "Item number " << itemNum << ": " << endl;
	cout << "Description: ";
	cin.ignore();
	cin.getline(item.desc, DESC_SIZE);
	cout << "Quantity: ";
	cin >> item.qty;
	cout << "Price: ";
	cin >> item.price;

	file.write(reinterpret_cast<char *>(&item), sizeof(item));
}
	
