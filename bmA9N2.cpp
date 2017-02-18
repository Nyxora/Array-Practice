//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#9 Part 2
//	      		Due Date:		Oct. 31, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Generate 30 random #'s between 0 and 9. Find the frequency of number.
//---------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

struct NUM
{
	int n;
	int freq;
};

int main ()
{
	// Time stamp.
	time_t p; time(&p);
	cout << "Today's time and date: " << ctime(&p) <<endl;

	// Initialize array All[30].
	NUM All[10];
	for (int i = 0; i < 10; ++i)
	{
		All[i].n = i;
		All[i].freq = 0;
	}
	
	// Get 30 random numbers between 0-9 and add to frequencies.
	srand(time(0));
	for (int k = 0; k < 30; ++k)
	{
		int n = rand()%10;
		All[n].freq += 1;
	}
	
	// Print all frequencies.
	cout << "    Number    Frequency\n";
	cout << setfill(char(196));
	cout << " " << right << setw(25) << "" << endl;
	for (int i = 0; i < 10; ++i)
	{
		cout << "      " << All[i].n << "\t\t  " << All[i].freq << endl;
	}
	
	// Find min and max frequencies.
	int max = All[0].freq, min = All[0].freq;
	for (int i = 0; i < 10; ++i)
	{
		if(All[i].freq > max) max = All[i].freq;
		if(All[i].freq < min) min = All[i].freq;
	}
	
	// Print the maximum frequencies.
	cout << "\tNumber(s) with the largest frequency of " << max << " is/are:";
	for (int i = 0; i < 10; ++i)
	{
		if(All[i].freq == max) cout << " " << All[i].n;
	}
	
	// Print the minimum frequencies.
	cout << "\n\tNumber(s) with the smallest frequency of " << min << " is/are:";
	for (int i = 0; i < 10; ++i)
	{
		if(All[i].freq == min) cout << " " << All[i].n;
	}

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}
//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Thu Oct 24 16:40:47 2013
// 
//     Number    Frequency
//  ─────────────────────────
//       0           2
//       1           2
//       2           6
//       3           3
//       4           4
//       5           2
//       6           0
//       7           4
//       8           5
//       9           2
//         Number(s) with the largest frequency of 6 is/are: 2
//         Number(s) with the smallest frequency of 0 is/are: 6
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------