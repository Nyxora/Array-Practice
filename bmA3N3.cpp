//-----------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#3 Part 3
//	      		Due Date:		Sept. 19, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Create an array of 20 random numbers. Find the MIN and MAX of the array and count the 
//          number of ODD and EVEN. Display the MIN, MAX, #ODD, #EVEN, and display the sorted array.
//-----------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	// Date and Time
	time_t p; time(&p); cout << "Today's time and date: " << ctime(&p);

	// Arrays and Variables.
	int Num[20];
	int odd = 0, even = 0;

	// Fill array Num with 20 random numbers between 10 and 40 and display.	
	cout << "My random array: ";
	
	srand(time(0));
	for (int i=0; i<20; i++)
	{
		Num[i]=rand()%30+11;
		cout << Num[i] << " ";
	}
	cout << endl;

	// Find and display minimum and maximum.
	int max = Num[0], min = Num[0]; 

	for (int k=0; k<20; ++k)
	{
		if (Num[k] > max) max = Num[k];
		if (Num[k] < min) min = Num[k];
	}
	cout << "The max is: " << max << endl;
	cout << "The min is: " << min << endl;
	
	// Find and display number of even and odds.
	for (int j=0; j<20; j++)
	{
		if (Num[j]%2 == 0) even++;
		else odd++;
	}
	cout << "Number of odds: " << odd << endl;
	cout << "Number of even: " << even << endl;

	// Sort and display the array.
	sort(Num, Num+20);
	cout << "My sorted array: ";
	for (int i=0; i<20; i++)
	{
		cout << Num[i] << " ";
	}
	cout << endl;

	// pause and return
	system("pause");
	return 0;
}

//----------------------------------------------------Output---------------------------------------------
// Today's time and date: Wed Sep 18 20:18:50 2013
// My random array: 33 30 28 16 27 33 33 25 38 29 13 18 33 29 33 23 31 38 24 11
// The max is: 38
// The min is: 11
// Number of odds: 13
// Number of even: 7
// My sorted array: 11 13 16 18 23 24 25 27 28 29 29 30 31 33 33 33 33 33 38 38
// Press any key to continue . . .
//-------------------------------------------------------------------------------------------------------