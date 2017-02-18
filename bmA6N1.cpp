//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#6 Part 1
//	      		Due Date:		Oct. 10, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Get a sentence from user then count and display the # of uppercase, lowercase, words,
//			and vowels.
//---------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cctype>

using namespace std;

// Prototype functions.
bool isvowel(char x);

int main ()
{
	// Time stamp.
	time_t p; time(&p);
	cout << "Today's time and date: " << ctime(&p) <<endl;

	// Ask for sentence.
	char l; int numU = 0, numL = 0, numW = 0, numV = 0;
	cout << "I can count the number of uppercase, lowercase, vowels, and words!\n\n";
	cout << "Please enter a sentence: ";
	
	while (cin.get(l), l != '\n')
	{
	// Count # of uppercase letters.
		if (isupper(l)) numU++;
	// Count # of vowels.
		if (isvowel(l)) numV++;
	// Count # of lowercase letters.
		if (islower(l)) numL++;
	// Count  # of words.
		if (isspace(l)) numW++;
	}
	// Display.
		cout << setfill('.');
		cout << "\t" << left << setw(30) << "No. of uppercase letters" << right << setw(5) << numU << endl;
		cout << "\t" << left << setw(30) << "No. of lowercase letters" << right << setw(5) << numL << endl; 
		cout << "\t" << left << setw(30) << "No. of vowels" << right << setw(5) << numV << endl; 
		cout << "\t" << left << setw(30) << "No. of words" << right << setw(5) << numW + 1 << endl; 
	
	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}

//---------------------------------------------------------------------------------------------------------
// Name  : isvowel
// Input : One value of char type
// Output: True or False
//---------------------------------------------------------------------------------------------------------
bool isvowel(char x) 
{
	switch(x) {
				case 'a': return true; break;
				case 'i': return true; break;
				case 'e': return true; break;
				case 'o': return true; break;
				case 'u': return true; break;
				case 'A': return true; break;
				case 'E': return true; break;
				case 'I': return true; break;
				case 'O': return true; break;
				case 'U': return true; break;
				default : return false;
	}
}
//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Tue Oct 08 20:27:26 2013
// 
// I can count the number of uppercase, lowercase, vowels, and words!
// 
// Please enter a sentence: I have Decided To Study More.
//         No. of uppercase letters..........5
//         No. of lowercase letters.........18
//         No. of vowels....................10
//         No. of words......................6
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------
