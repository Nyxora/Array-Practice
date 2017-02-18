//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#8 Part 2
//	      		Due Date:		Oct. 24, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Generate a random number then display a fortune based off the generated number.
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
	time_t p; time(&p);
	cout << "Today's time and date: " << ctime(&p) <<endl;

	// Array.
	string fortune[6] = {"Work harder!", "Go to Las Vegas", "Have fun!", "Watch Lakers!", "Save money.",
		"Buy Lotto Ticket!"};
	srand(time(0)); char ans = 'Y'; int r; 
	do {		
		cout << "Would you like to see your fortune? ";
		cin >> ans; if (islower(ans)) ans = toupper(ans);
		if (ans == 'Y')
		{
		r = rand()%6;
		cout << "\t" << fortune[r] << endl;
		}
		else {cout << "\nMay all your fortunes be in your favor.\n"; break;}
	} while (ans == 'Y');

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}
//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Thu Oct 17 17:08:01 2013
// 
// Would you like to see your fortune? y
//         Go to Las Vegas
// Would you like to see your fortune? Y
//         Go to Las Vegas
// Would you like to see your fortune? Y
//         Watch Lakers!
// Would you like to see your fortune? y
//         Buy Lotto Ticket!
// Would you like to see your fortune? Y
//         Watch Lakers!
// Would you like to see your fortune? n
//
// May all your fortunes be in your favor.
//
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------
