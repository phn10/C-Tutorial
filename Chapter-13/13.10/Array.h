#ifndef ARRAY_H
#define ARRAY_H

class Array
{
	private: 
		double *arr;
		int size;
	public:
		Array(int );
		~Array();
		void setElement(int, double);
		double getElement(int);
		double findHighest();
		double findLowest();
		double findAverage();
};
#endif
