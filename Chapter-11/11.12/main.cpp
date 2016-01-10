#include <iostream>
#include <string>
using namespace std;

struct Test 
{
	string name;
	int id;
	int *test; // set test as pointer for dynamically allocating
	double averageGrade;
	char courseGrade;
};

void input(Test *, int);
char courseGrade(int );
void displayData(Test );

int main()
{
	int numStudents;
	int numGrades;

	cout << "Enter the number of students: ";
	cin >> numStudents;
	cout << "Enter the number of grades each students has: ";
	cin >> numGrades;
	
	Test *student = nullptr;
	student = new Test[numStudents]; // dynamically create array of struct
	for (int index = 0; index < numStudents; index++)
		input(&student[index], numGrades);
	cout << endl;
	cout << "Here is the information: \n";
	cout << "-------------------------------------------\n";
	for (int index = 0; index < numStudents; index++)
	{	
		displayData(student[index]);
		cout << endl;
	}
	cin.get();
	cin.get();
	return 0;
}

void input(Test *student, int numGrades)
{
	int totalGrade = 0;
	cout << "Enter the ID of student: ";
	cin >> student->id;
	cout << "Enter student's name: ";
	cin.ignore();
	getline(cin, student->name);
	student->test = nullptr;
	student->test = new int[numGrades]; // dynamically create array of integer
	for (int index = 0; index < numGrades; index++)
	{
		cout << "Enter grade #" << index + 1 << ": ";
		cin >> student->test[index];
		totalGrade += student->test[index];
	}
	student->averageGrade = totalGrade / numGrades;
	student->courseGrade = courseGrade(student->averageGrade);
}

char courseGrade(int grade)
{
	char courseGrade;
	if (grade < 100 && grade >= 91) courseGrade = 'A';
	else if (grade > 81) courseGrade = 'B';
	else if (grade > 71) courseGrade = 'C';
	else if (grade > 61) courseGrade = 'D';
	else courseGrade = 'F';
	
	return courseGrade;
}

void displayData(Test student)
{
	cout << "Student's name: " << student.name << endl;
	cout << "Student's ID: " << student.id << endl;
	cout << "Student's average test score: " << student.averageGrade << endl;
	cout << "Student's course grade: " << student.courseGrade << endl;
}
