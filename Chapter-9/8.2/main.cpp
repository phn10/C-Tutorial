#include <iostream>
#include <iomanip>

using namespace std;
void sortSelectArr(double *[], int);
void showArr(double *[], int);
double average(double *[], int);
int main()
{
	double aver;
	const int max_size = 10;
	int size;
	cout << "Enter number of scores (maximum 10): ";
	cin >> size;
	double score[max_size]; // array of score

	// set array of pointer point to score array, 
	// all elements is null pointer
	double *ptr[max_size] = {nullptr, nullptr, nullptr, nullptr, nullptr,
							 nullptr, nullptr, nullptr, nullptr, nullptr};
	
	for (int i = 0; i < size; i++)
	{
		cout << "Enter score #" << i + 1 << ": ";
		cin >> score[i]; // receive score
		ptr[i] = &score[i]; // point the pointer store in ptr array to the score array
	}

	sortSelectArr(ptr, size); // select sort
	showArr(ptr, size); 
	cout << fixed << showpoint << setprecision(4);
	aver = average(ptr, size);
	cout << "The average score is: " << aver << endl;

	cin.get();
	cin.get();
	return 0;
}

//***********************************************************
// Definition of the select sort function					*
// This function change the position of the elements which  *
// contains the address of the pointer point to score array,*
// and thus changing the position of the scores's elements  *
//***********************************************************

void sortSelectArr(double *score[], int size)
{
	int startScan, minIndex;
	double *minValue;
	for (startScan = 0; startScan < size - 1; startScan++)
	{
		minIndex = startScan;
		minValue = score[minIndex];
		for (int index = startScan + 1; index < size; index++)
		{
			if (*minValue > *score[index])
			{
				minIndex = index;
				minValue = score[index];
			}
		}
		score[minIndex] = score[startScan];
		score[startScan] = minValue;
	}
}

void showArr(double *score[], int size)
{
	cout << "You entered: ";
	for (int count = 0; count < size; count++)
		cout << *score[count] << " ";
	cout << endl;
}

double average(double *ptr[], int size)
{
	double sum = 0;
	for (int index = 0; index < size; index++)
		sum += *ptr[index];
	return sum / size;
}
