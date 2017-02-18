//-------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#3 Part 2
//	      		Due Date:		Sept. 19, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Display the salaries of some presidents and then display the average of their saleries.
//-------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	// Date and Time
	time_t p; time(&p); cout << "Today's time and date: " << ctime(&p);

	// Variables.
	float total = 0, average = 0;

	// Arrays.
	string Names[5] = {"Ronald Reagan", "Bill Clinton", "George Bush", "Barack Obama", "Jimmy Carter"};
	int Salary[5] = {25000, 300000, 185000, 4500, 130};

	// Display Title.
	cout << "\t     Name\t\t\tSalary" << endl;
	cout << setfill(char(196));
	cout << "\t" << left << setw(38) << "" << endl;
	
	// Display Arrays.
	cout << setfill('.');
	cout << fixed << showpoint << setprecision(2);
	for (int i=0; i < 5; ++i)
	{
		cout << "\t" << left << setw(19) << Names[i] << right << setw(19) << Salary[i] << endl;
	}

	// Average.
	for (int i=0; i < 5; i++)
	{
		total += Salary[i];
	}
	average = total/5;

	cout << "Average salary is $" << average << endl;

	// pause and return
	system("pause");
	return 0;
}

//----------------------------------------------------Output---------------------------------------------
// Today's time and date: Wed Sep 18 20:08:47 2013
//              Name                       Salary
//         ──────────────────────────────────────
//         Ronald Reagan....................25000
//         Bill Clinton....................300000
//         George Bush.....................185000
//         Barack Obama......................4500
//         Jimmy Carter.......................130
// Average salary is $102926.00
// Press any key to continue . . .
//-------------------------------------------------------------------------------------------------------