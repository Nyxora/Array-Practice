//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#13 Part 1
//	      		Due Date:		Dec. 5, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Get a sentence from user and print in reverse order.
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
	STACK <char, 80> S;
	char a, c;
	
	do	{
		// Set counter to 0.
		S.ClearStack();
		
		// Get a sentence.
		cout << "Enter a sentence: ";
		while(cin.get(c), c!='\n')
		{
			S.PushStack(c);
		}
		
		// Print reverse order.
		cout << "\tIn reverse order: ";
		while(!S.EmptyStack())
		{
			cout << S.PopStack();
		}
		cout << endl;
		
		// Ask to continue.
		cout << "\tCONTINUE? (y/n) ";
		cin >> a; a = tolower(a);
		cout << endl; cin.get(c); c = ' ';
	} while (a == 'y');
	
	// Terminate program.
	system("pause");
	return 0;
}
//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Thu Nov 21 16:44:01 2013
// 
// Enter a sentence: The Last Project
//         In reverse order: tcejorP tsaL ehT
//         CONTINUE? (y/n) y
// 
// Enter a sentence: Sit On a Potato Pan Otis
//         In reverse order: sitO naP otatoP a nO tiS
//         CONTINUE? (y/n) n
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------