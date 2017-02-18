//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#8 Part 3
//	      		Due Date:		Oct. 24, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Get a name, then display the name in uppercase, lowercase, then just the first name and lastly,
//			compare it to a second name given by user.
//---------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

int main ()
{
	// Time stamp.
	//time_t p; time(&p);
	//cout << "Today's time and date: " << ctime(&p) << endl;

	// Get name.
	char fname[20], lname[20], friendName[20];
	cout << "Enter your full name: "; 
	cin >> fname; cin.getline(lname, 20,'\n');
	
	// Display name length, in lowercase, in uppercase, and just the first name.
	cout << "\tYour name's length is " << strlen(fname) + strlen(lname) << endl;
	cout << "\tYour name in lower case: " << strlwr(fname) << strlwr(lname) << endl;
	cout << "\tYour name in upper case: " << strupr(fname) << strupr(lname) << endl;
	cout << "\tYour first name is: " << strupr(fname) << "\n\n";

	// Get friend's name and compare to name.
	cout << fname << ", what is your friend's name? ";
	cin >> friendName;

	if (strcmp(fname, friendName) == 0) cout << "You have the same name as your friend!" << endl;
	else cout << "\tYour name is not the same as your friend's name." << endl;

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}
//------------------------------------------------Output---------------------------------------------------
// Enter your full name: Barack H Obama
//         Your name's length is 14
//         Your name in lower case: barack h obama
//         Your name in upper case: BARACK H OBAMA
//         Your first name is: BARACK
// 
// BARACK, what is your friend's name? barak
//         Your name is not the same as your friend's name.
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------
