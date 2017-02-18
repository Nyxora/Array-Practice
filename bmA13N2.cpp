//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#13 Part 2
//	      		Due Date:		Dec. 5, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Convert an integer recieved from user input from base 10 to base 16 and display.
//---------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <cctype>
#include <cstring>
#include <algorithm>
#include "STACKLIB.h"

using namespace std;

int main()
{
	// Time stamp.
	time_t timc; time(&timc);
	cout << "Today's time and date: " << ctime(&timc) << endl;

	// Initialize stack and variables.
	STACK <int, 20> S;
	char a; int n, r, x;

	do	{
		// Set Counter to 0.
		S.ClearStack();
		
		//Get Integer.
		cout << "Enter an integer number: "; cin >> n;
		cout << "\t" << n << " at base 10 is ";

		// Convert integer to base 16 and print.
		while(n!=0)
		{
			r = n%16;
			S.PushStack(r);
			n=n/16;
		}
		while(!S.EmptyStack())
		{
			x = S.PopStack();
			(x <= 9)? cout << x: cout << char(55+x);
		}
		cout << " at base 16.\n";

		// Ask to continue.
		cout << "CONTINUE? (y/n) ";
		cin >> a; a = tolower(a);
	} while (a == 'y');
	
	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}

//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Tue Dec 03 10:05:30 2013
// 
// Enter an integer number: 2538
//         2538 at base 10 is 9EA at base 16.
// CONTINUE? (y/n) y
// Enter an integer number: 2746
//         2746 at base 10 is ABA at base 16.
// CONTINUE? (y/n) y
// Enter an integer number: 256
//         256 at base 10 is 100 at base 16.
// CONTINUE? (y/n) y
// Enter an integer number: 300
//         300 at base 10 is 12C at base 16.
// CONTINUE? (y/n) y
// Enter an integer number: 745
//         745 at base 10 is 2E9 at base 16.
// CONTINUE? (y/n) n
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------