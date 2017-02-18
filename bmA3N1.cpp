//---------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#3 Part 1
//	      		Due Date:		Sept. 19, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Display Array a and Days and compute the min, max and avg 
//			of Array a.
//---------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

int main ()
{
	time_t p; time(&p);
	cout << "Today's time and date: " << ctime(&p) <<endl;
	
	// Arrays and Variables.
	int a[6] = {3, 9, 7, 8, 1, 2};
	string Days[7] = {"Sun", "Mon", "Tue", "Wed", "Thr", "Sat", "Sun"};
	int Max, Min; float Avg, Total = 0;

	//Display Array a.
	cout << "This is array a:   ";
	for (int i = 0; i < 6; ++i)
		cout << a[i] << "   ";
	cout << endl;

	// Compute and display the max, min, and average of Array a.
	Max = Min = a[0];
	for (int n = 1; n < 6; ++n)
	{
		if (a[n] > Max) Max = a[n];
		if (a[n] < Min) Min = a[n];
	}
	for (int h = 0; h < 6; ++h)
	{
		Total += a[h];
	}
	
	Avg = Total/6.0;

	cout << "Maximum = " << Max;
	cout << ",  Minimum = " << Min;
	cout << fixed << showpoint << setprecision(2);
	cout << ",  Average = " << Avg << endl;

	// Display Array Days.
	cout << "This is Array Days:  ";
	for (int k = 0; k < 7; ++k)
		cout << Days[k] << "  ";
	cout << endl;

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}

//-------------------------------Output--------------------------------
// Today's time and date: Wed Sep 18 22:47:59 2013
// 
// This is array a:   3   9   7   8   1   2
// Maximum = 9,  Minimum = 1,  Average = 5.00
// This is Array Days:  Sun  Mon  Tue  Wed  Thr  Sat  Sun
//
// Press any key to continue . . .
//---------------------------------------------------------------------
