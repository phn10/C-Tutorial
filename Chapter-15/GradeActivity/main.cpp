#include <iostream>
#include "GradeActivity.h"
using namespace std;

int main()
{
        double testScore;

        GradeActivity test;

        cout << "Enter your numeric test score: ";
        cin >> testScore;

        test.setScore(testScore);

        cout << "The grade for that test is: " << test.getLetterGrade() << endl;

        return 0;
}
