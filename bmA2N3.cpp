//-----------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#2 Part 3
//	      		Due Date:		Sept. 12, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Allow user to practice addition problems with integers < 100.
//-----------------------------------------------------------------------

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main ()
{
	time_t p; time(&p);
	cout << "Today's time and date: " << ctime(&p) <<endl;
	
	// Variables.
	int right = 0, wrong = 0, num1, num2, ans;
	char cont;
	
	srand(time(0));

	// Gennerate random addition problem.
	do 
	{
		num1 = rand()%100;
		num2 = rand()%100;
		cout << num1 << " + " << num2 << " = ? ";
		cin >> ans;
		if (num1 + num2 == ans)
			{
				cout << "CORRECT\n";
				++right;
			}
		else
			{
				cout << "WRONG\n";
				++wrong;
			}
		cout << "Continue(y/n)? ";
		cin >> cont;

	} while (cont == 'y' || cont == 'Y');

	cout << "\nNumber of CORRECT answers: " << right << endl;
	cout << "Number of WRONG answers: " << wrong << endl;

	// Terminate program.
	system("pause");
	return 0;

}

//-------------------------------Output----------------------------------
// Today's time and date: Fri Sep 06 23:20:07 2013
//
// 55 + 97 = ? 96
// WRONG
// Continue(y/n)? y
// 61 + 17 = ? 78
// CORRECT
// Continue(y/n)? y
// 87 + 8 = ? 95
// CORRECT
// Continue(y/n)? n
// 
// Number of CORRECT answers: 2
// Number of WRONG answers: 1
// Press any key to continue . . .
//-----------------------------------------------------------------------