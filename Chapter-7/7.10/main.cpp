#include <iostream>
using namespace std;
void processing(char [], char [], int);
int main()
{
	const int questions = 20;
	char answer[questions] = {'A', 'D', 'B', 'B', 'C',
							  'B', 'A', 'B', 'C', 'D',
							  'A', 'C', 'D', 'B', 'D',
							  'C', 'C', 'A', 'D', 'B'};
	char receive[questions];
	processing(answer, receive, questions);

	cin.get();
	cin.get();
	return 0;
}

void processing(char answer[], char receive[], int questions)
{
	int grade = 0;
	int i = 0;
	do
	{
		cout << "Answer for questions " << i + 1 << ": ";
		cin >> receive[i];
		if (receive[i] != 'A' && receive[i] != 'B' 
		 && receive[i] != 'C' && receive[i] != 'D')
			cout << "Error: Invalid answer!! Only choices A, B, C, D are accepted!!" << endl;
		else
		{
			if (receive[i] == answer[i])
				grade += 1;
		i += 1;
		}
	}
	while ((receive[i] != 'A' && receive[i] != 'B' 
			&& receive[i] != 'C' && receive[i] && 'D') && i < questions);
	cout << "Your grade is : " << grade << endl;
	if (grade >= 15) cout << "Congratulations!! You passed the exam!! " << endl;
	else cout << "You are not qualified" << endl;
}

								
