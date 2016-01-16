#ifndef DATE_H
#define DETA_H

class Date
{
private: 
	int day;
	int month;
	int year;
	void initDay(int d);
	void initMonth(int m);
	void initYear(int y);
public:
	/*Date (int = 1, int = 1, int = 1)
	{ initDay(1), initMonth(1), initYear(1) };*/
	Date (int d, int m, int y)
		{ initDay(d); initMonth(m); initYear(y); };
	void showDate1();
	void showDate2();
	void showDate3();
};
#endif
