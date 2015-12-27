#include <iostream>
using namespace std;

const int COLS = 3;
const int rows = 3;

void receiveData(int [][COLS], int);
int checkColumns(int [][COLS], int);
int checkRows(int [][COLS], int);
int checkDiagonals(int [][COLS], int);
bool checkTotal(int, int, int);

int main()
{
	int numbers[rows][COLS];
	int sumColumns; 
	int sumRows;
	int sumDiagonals;
	receiveData(numbers, rows);
	sumColumns = checkColumns(numbers, rows);
	sumRows = checkRows(numbers, rows);
	sumDiagonals = checkDiagonals(numbers, rows);
	checkTotal(sumRows, sumColumns, sumDiagonals);

	if(checkTotal) cout << "This is a Lo Shu Square" << endl;
	else{ cout << "stop at check total" << endl; cout << "This is not a Lo Shu Square" << endl;}
	cin.get();
	cin.get();
	return 0;
}

void receiveData(int numbers[][COLS], int rows)
{
	cout << "Enter array of data: " << endl;
	cout << "---------------------" << endl;
	for (int r = 0; r < rows; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			cin >> numbers[r][c];
		}
	}
}

int checkColumns(int numbers[][COLS], int rows)
{
	int sum[3];
	for (int i = 0; i < COLS; i++)
	{
		sum[i] = numbers[0][i] + numbers[1][i] + numbers[2][i];
	}
	if (sum[0] != sum[1] || sum[1] != sum[2])
	{
		cout << "Stop at check columns" << endl;
		cout << "This is not a Lo Shu Square" << endl;
		cin.get();
		cin.get();
		exit(0);
	}
	return sum[0];
}

int checkRows(int numbers[][COLS], int rows)
{
	int sum[3];
	for (int i = 0; i < rows; i++)
	{
		sum[i] = numbers[i][0] + numbers[i][1] + numbers[i][2];
	}
	if (sum[0] != sum[1] || sum[1] != sum[2])
	{
		cout << "Stop at check rows" << endl;
		cout << "This is not a Lo Shu Square" << endl;
		cin.get();
		cin.get();
		exit(0);
	}
	return sum[0];
}

int checkDiagonals(int numbers[][COLS], int rows)
{
	int sum[2] = {0, 0};
	for (int r = 0; r < rows; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			sum[0] += numbers[r][c];
			sum[1] += numbers[rows - r - 1][COLS - c - 1];
		}
	}
	if (sum[0] != sum[1])
	{
		cout << "Stop at check Diagonals" << endl;
		cout << "This is not a Lo Shu Square" << endl;
		cin.get();
		cin.get();
		exit(0);
	}
	return sum[0];
}

bool checkTotal(int sum1, int sum2, int sum3)
{
	if (sum1 != sum2 || sum2 != sum3)
		return false;
	else
		return true;
}
