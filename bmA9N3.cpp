//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#9 Part 3
//	      		Due Date:		Oct. 31, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Make a struct array of user defined size and fill with user input.
//---------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <cctype>
#include <cstring>
using namespace std;

struct PERSON
{
	string name;
	int age;
	float gpa;
};

int main ()
{
	// Time stamp.
	time_t x; time(&x);
	cout << "Today's time and date: " << ctime(&x) <<endl;

	// Ask for number of records.
	cout << "Enter number of records: ";
	int N; cin >> N;

	// Initialize and fill PERSON array p.
	PERSON* p; p = new PERSON[N];
	for (int i = 0; i < N; ++i)
	{
		cout << "Enter name, age, and GPA: "; cin >> p[i].name >> p[i].age >> p[i].gpa;
	}
	cout << "\nThank you. Recording data.\n"; // Pointless but funny, to me anyways.
	cout << "\nHere is the recorded content:\n\tNAME\tAGE\tGPA\n";
	for (int i = 0; i < N; ++i)
	{
		cout << fixed << showpoint << setprecision(2);
		cout << '\t' << p[i].name << '\t' << p[i].age << '\t' << p[i].gpa << endl;
	}

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}
//------------------------------------------------Output---------------------------------------------------
//Today's time and date: Wed Oct 30 22:07:44 2013
//
// Enter number of records: 3
// Enter name, age, and GPA: Robert 21 2.1
// Enter name, age, and GPA: Kristal 20 2
// Enter name, age, and GPA: Joseph 22 3.1
// 
// Thank you. Recording data.
// 
// Here is the recorded content:
//         NAME    AGE     GPA
//         Robert  21      2.10
//         Kristal 20      2.00
//         Joseph  22      3.10
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------