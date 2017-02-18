//-----------------------------------------------------------------------------------------------------
//									Name:			Megan A. Bond
//									Course:			CS_121, Section Thursday
//	      							Project:		#2 Part 2
//	      							Due Date:		Sept. 12, 2013
//	     							Professor:		Ray Ahmadnia
//
// Purpose: Count the number of Uppercase letters, Digits and Vowels in a sentecnce provided by user.
//-----------------------------------------------------------------------------------------------------
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main ()
{
	time_t p; time(&p);
	cout << "Today's time and date: " << ctime(&p) <<endl;
		
	// Variables.
	int uppercase = 0, digits = 0, vowels = 0;
	char cha;

	// Get sentence.
	cout << "Enter sentence: ";
	cin.get(cha);

	// Count Upercase letters, Digits, and Vowels.
	while (cha != '\n')
	{
		if (cha >= 'A' && cha <= 'Z')
			++uppercase;
		if (cha >= '0' && cha <= '9')
			++digits;
		if (cha == 'A' || cha == 'E' || cha == 'I' || cha == 'O' || cha == 'U' || cha == 'a' || 
			cha == 'e' || cha == 'i' || cha == 'o' || cha == 'u')
			++vowels;

		cin.get(cha);
	}

	// Display tally.
	cout << setfill('.');
	cout << left << setw(30) << "Number of uppercase letters"<< right << setw(10) << uppercase << endl;
	cout << left << setw(30) << "Number of digits" << right << setw(10) << digits << endl;
	cout << left << setw(30) << "Number of vowels" << right << setw(10) << vowels << endl;

	// Terminate program.
	system("pause");
	return 0;

}

//------------------------------------------------Output-----------------------------------------------
// Today's time and date: Fri Sep 06 22:40:47 2013
//
// Enter sentence: Today Is Thr May 4, 2013
// Number of uppercase letters............4
// Number of digits.......................5
// Number of vowels.......................4
// Press any key to continue . . .
//-----------------------------------------------------------------------------------------------------