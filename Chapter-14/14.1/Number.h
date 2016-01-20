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
		static char number[4]; 
		static string lessThan20[20];
		static string ten[10];
	public:
		Number(char num[], int c)
		{
			for (int i = c - 1; i >= 0; i--)
				number[i + 4 - c] = num[i];

			if (c != 4)
				for (int i = 0; i < 4 - c; i++)
					number[i] = '0';
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
			else if ((number[2] - '0') == 0)
				print.append(lessThan20[(number[3] - '0')]);

			return print;
		};			
};
#endif
