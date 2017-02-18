//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#12 Part 1
//	      		Due Date:		Nov. 21, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Collect 5 names and 7 numbers from users into arrays and then display them.
//---------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <cctype>
#include <cstring>
#include <algorithm>
#include "MYLIB.h"

using namespace std;

int main()
{

	cout << endl;
	
	// Create array P and fill array a with random integers <100.
	cout << "Enter 5 names: ";
	ONE <string, 5> P; P.ReadData();

	cout << "Enter 7 integers: ";
	ONE <int, 7> Q; Q.ReadData();
	
	// Display arrays P & Q.
	cout << "This is the content of object P\n    ";
	P.Display(); 
	cout << "This is the content of object Q\n    "; 
	Q.Display();

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}

//------------------------------------------------Output---------------------------------------------------
// 
// Enter 5 names: Bill Tom John Mary Phil
// Enter 7 integers : 22 33 66 44 11 55 77
// This is the content of object P
// Bill Tom John Mary Phil
// This is the content of object Q
// 22 33 66 44 11 55 77
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------