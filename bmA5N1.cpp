//-------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#5 Part 1
//	      		Due Date:		Nov. 3, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Get a sentence from user then count and display the # of letters, digits, words, and 
//			vowels.
//-------------------------------------------------------------------------------------------------

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

	// Ask for sentence.
	char l; int numL = 0, numD = 0, numW = 0, numV = 0;
	cout << "Enter a sentence: ";
	//cin.get(l);
	while (cin.get(l), l != '\n')
	{
	// Count # of letters.
		if (isalpha(l)) 
		{	
			numL++;
			// Count # of vowels.
			switch(l) {
				case 'a': numV++; break;
				case 'i': numV++; break;
				case 'e': numV++; break;
				case 'o': numV++; break;
				case 'u': numV++; break;
				case 'A': numV++; break;
				case 'E': numV++; break;
				case 'I': numV++; break;
				case 'O': numV++; break;
				case 'U': numV++; break;
				default:;
			}
		}
	// Count # of digits.
		if (isdigit(l)) numD++;
	// Count  # of words.
		if (isspace(l)) numW++;
	}
	// Display.
		cout << setfill('.');
		cout << "\t" << left << setw(20) << "No. of letters" << right << setw(15) << numL << endl;
		cout << "\t" << left << setw(20) << "No. of digits" << right << setw(15) << numD << endl; 
		cout << "\t" << left << setw(20) << "No. of words" << right << setw(15) << numW + 1 << endl; 
		cout << "\t" << left << setw(20) << "No. of vowels" << right << setw(15) << numV << endl; 
		
	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}
//--------------------------------------------Output-----------------------------------------------
// Today's time and date: Thu Sep 26 16:07:18 2013
//
// Enter a sentence: To Build Something, First You have to Tear It off.
//         No. of letters...................39
//         No. of digits.....................0
//         No. of words.....................10
//         No. of vowels....................16
// 
// Press any key to continue . . .
//-------------------------------------------------------------------------------------------------
