#ifndef NUMBER_H
#define NUMBER_H
#include <string>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Number
{
	private:
		int u;
		char number[4]; 
		static string lessThan20[20];
		static string ten[10];
	public:
		Number(char num[], int c)
		{
			for (int i = 0; i < c; i++)
				number[i] = num[i];
		};
			

		string printString()
		{
			string print = "";
			if ((number[0] - '0') > 0)
			{
				print.append(lessThan20[(number[0] - '0')]);
				print.append(" thousand ");
			}
			if ((number[1] - '0') > 0)
			{
				print.append(lessThan20[(number[1] - '0')]);
				print.append(" hundred and ");
			}
			if ((number[2] - '0') > 0)
			{
				if ((number[2] - '0') > 1)
				{
					print.append(ten[number[2] - '0']);
					print.append(" ");
					print.append(lessThan20[(number[3] - '0')]);
					return print;
				}
				else if ((number[2] - '0') == 1)
				{
					char x = number[2];
					char y = number[3];
					int num = atoi(&x) * 10 + atoi(&y);
					print.append(lessThan20[num]);
				}
			}
			if ((number[3] - '0') >= 0)
				print.append(lessThan20[(number[3] - '0')]);
				
			return print;
		};			
};
#endif
