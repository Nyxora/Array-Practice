//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#12 Part 2
//	      		Due Date:		Nov. 21, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: To create an array of 10 random numbers display and then sort and display.
//---------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <cctype>
#include <cstring>
#include <algorithm>

using namespace std;

template <class T, int n>
class TWO
{
	private: T a[n];
	public:  void ReadData();		// Read data into array a.
			 void DisplayData();	// Display array a.
			 void SortArray();		// Sort array a.
			 ~TWO(){}
};

int main ()
{
	// Time stamp.
	time_t timc; time(&timc);
	cout << "Today's time and date: " << ctime(&timc) <<endl;
	
	
	// Create array P and fill array a with random integers <100.
	TWO <int, 10> P; P.ReadData();
	// Display unsorted array a of P.
	cout << "Your unsorted array:\t"; P.DisplayData();
	// Sort array a of P.
	P.SortArray();
	// Display sorted array P.
	cout << "Your sorted array:\t"; P.DisplayData();

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}
//---------------------------------------------------------------------------------------------------------
// Name: ReadData
// Input: none
// Output: none
//---------------------------------------------------------------------------------------------------------
template <class T, int n>
void TWO <T, n> :: ReadData()
{
	srand(time(0));
	for(int i=0; i<n; ++i)
		a[i] = rand()%100;
}
//---------------------------------------------------------------------------------------------------------
// Name: DisplayData
// Input: none
// Output: none
//---------------------------------------------------------------------------------------------------------
template <class T, int n>
void TWO <T, n> :: DisplayData()
{
	for(int i=0; i<n; ++i)
		cout << a[i] << " ";
	cout << endl;
}
//---------------------------------------------------------------------------------------------------------
// Name: SortArray
// Input: none
// Output: none
//---------------------------------------------------------------------------------------------------------
template <class T, int n>
void TWO <T, n> :: SortArray()
{
	sort(a, a+n);
}

//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Thu Nov 14 16:16:09 2013
// 
// Your unsorted array:    55 44 79 71 65 47 76 69 62 83
// Your sorted array:      44 47 55 62 65 69 71 76 79 83
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------