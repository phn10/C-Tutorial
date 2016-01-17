#include <iostream>
#include "Array.h"

Array::Array(int s)
{
	size = s;
	arr = new double[size];
	for (int i = 0; i < size; i++)
		arr[i] = 0;
}

Array::~Array()
{
	delete [] arr;
}

void Array::setElement(int i, double v)
{
	arr[i] = v;
}

double Array::getElement(int i)
{
	return arr[i];
}

double Array::findHighest()
{
	double highest = arr[0];
	for (int i = 1; i < size; i++)
		if (arr[i] > highest)
			highest = arr[i];
	return highest;
}

double Array::findLowest()
{
	double lowest = arr[0];
	for (int i = 1; i < size; i++)
		if (arr[i] < lowest)
			lowest = arr[i];
	return lowest;
}

double Array::findAverage()
{
	double sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	return sum / size;
}
