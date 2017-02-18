//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#9 Part 1
//	      		Due Date:		Oct. 31, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Create a recursive function for 1^3+2^3+3^3+...+n^3 for n = 10
//---------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

int nCubed (int n);

int main ()
{
	// Time stamp.
	time_t p; time(&p);
	cout << "Today's time and date: " << ctime(&p) <<endl;

	// Call statement.
	cout << nCubed(10) << endl;

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}
//---------------------------------------------------------------------------------------------------------
// Name: nCubed
// Input: a variable of int type
// Output: an int
//---------------------------------------------------------------------------------------------------------
int nCubed (int n)
{
	if (n == 1) return 1;
	else return n*n*n + nCubed(n-1);
}
//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Thu Oct 24 15:45:00 2013
// 
// 3025
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------