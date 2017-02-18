//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#13 Part 3
//	      		Due Date:		Dec. 5, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Print arrays in reverse order using user defined STACKLIB.
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
	
	// Initialize Stacks and counters.
	STACK <int, 5> AGE; AGE.ClearStack(); 
	STACK <string, 5> NAME; NAME.ClearStack();
	int age[5] = {22, 33, 11, 77, 55};
	string name[5] = {"Clinton, Bill", "Jackson, Phil", "Bryant, Kobe", "Jones, Bill", "Turner, Tedd"};

	// Populate stack.
	for(int i=0;i<5;++i)
	{
		AGE.PushStack(age[i]);
		NAME.PushStack(name[i]);
	}

	// Print stack.
	cout << "\t    Name\t    Age\n";
	cout << setfill(char(196));
	cout << left << setw(38) << " " << endl;
	cout << setfill(' ');
	while(!AGE.EmptyStack())
	{
		cout << "\t" << left << setw(16) << NAME.PopStack() << right << setw(7) << AGE.PopStack() << endl;
	}
		
	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}

//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Tue Dec 03 11:05:43 2013
// 
//             Name            Age
//  ─────────────────────────────────────
//         Turner, Tedd         55
//         Jones, Bill          77
//         Bryant, Kobe         11
//         Jackson, Phil        33
//         Clinton, Bill        22
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------