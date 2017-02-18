// --------------------------------------- CPSC 121.3 ----------------------------------------
// Programmer: Megan Bond
// Assignment: 1
// Number: 2
// Project: Create a greeting based on user input.
// Changes Made to Original Project: The original wording did not make sense. You entered your 
// gender but were using that info to create a salutation for your friend so I changed it to
// a request for the friend's gender and asked for the name of the friend first so the user 
// would decide on a friend before answering questions about that friend. Also, 'Ms.' or
// 'Miss' should always be used if marital status is unknown.
// -------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
	// Variables.
	string fullname, title, friendname;
	char gender;

	// Get full name.
	cout << "Please enter your full name: ";
	getline(cin, fullname);

	// Get friend's name.
	cout << fullname << ", please enter the name of your friend: ";
	getline (cin, friendname);

	// Get gender.
	cout << fullname << ", please enter your friend's gender( m / f ): ";
	cin >> gender;

	// Decide if Mr. or Mrs.
	if (gender == 'm'|| gender == 'M')
	{ 
	    cout << "Hello, Mr. " << friendname << "! " << fullname << " considers you a friend!" <<endl;
	}
	else if (gender == 'f' || gender == 'F')
	{ 
		// Display greeting for Mrs.
		cout << "Hello, Ms. " << friendname << "! " << fullname << " considers you a friend!" <<endl;
	}
	else
	{
		cout << "Gender not entered. Generic salutation made." << endl;
		cout << "Hello, " << friendname << "!" << fullname << " considers you a friend!" << endl;
	}
	
	// Pause program.
	system("pause");

	return 0;
}

// ------------------------- Sample Output ---------------------------
// Please enter your full name: Barack H. Obama
// Barack H. Obama, please enter the name of your friend: Bill Clinton
// Barack H. Obama, please enter your friend's gender( m / f ): M
// Hello, Mr. Bill Clinton! Barack H. Obama considers you a friend!
// Press any key to continue . . .
// --------------------------------------------------------------------
