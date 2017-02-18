//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#7 Part 1
//	      		Due Date:		Oct. 17, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Use functions to fill array from data.txt, display the array, then find and display the average
//			min and max.
//---------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>
#include <fstream>

using namespace std;

// Prototype functions.
void CopyData (string data, int x[]);
void Display (int x[]);
float FindAve (int x[]);
void DisplayAbove(int x[], float avg);
void FindMaxMin(int x[], int& max, int& min);
void DisplayMaxMin(int max, int min);

const int N = 6;

int main ()
{
	// Time stamp.
	time_t p; time(&p);
	cout << "Today's time and date: " << ctime(&p) <<endl;

	// Arrays.
	int a[N];
	
	// Copy data from file into array a.
	CopyData("data.txt", a);

	// Display array a.
	Display(a);

	// Find and display the average of numbers in array a.
	float Average = FindAve(a);
	cout << fixed << showpoint << setprecision(2);
	cout << "Average = " << Average << endl;

	// Display data numbers whose value is >= average.
	DisplayAbove(a, Average);

	//Find and display the maximum and minimum numbers in array a.
	int max, min;
	FindMaxMin(a, max, min);
	DisplayMaxMin(max, min);

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}

//---------------------------------------------------------------------------------------------------------
// Name  : CopyData
// Input : String "data.txt", Array a
// Output: Array a
//---------------------------------------------------------------------------------------------------------
void CopyData (string data, int x[])
{
	fstream f; f.open(data, ios::in);

	for (int i = 0; i < N; ++i)
		f >> x[i];
	f.close();
}
//---------------------------------------------------------------------------------------------------------
// Name  : Display
// Input : Array a
// Output: None
//---------------------------------------------------------------------------------------------------------
void Display (int x[])
{
	cout << "This is array a:";
	for (int i = 0; i < N; ++i)
		cout << " " << x[i];
	cout << endl;
}
//---------------------------------------------------------------------------------------------------------
// Name  : FindAve
// Input : Array a
// Output: Average
//---------------------------------------------------------------------------------------------------------
float FindAve (int x[])
{
	int total = 0;
	for(int i = 0; i < N; ++i)
		total += x[i];
	return total/N;
}
//---------------------------------------------------------------------------------------------------------
// Name  : DisplayAbove
// Input : Array a, float Average
// Output: None
//---------------------------------------------------------------------------------------------------------
void DisplayAbove(int x[], float avg)
{
	cout << "Data value above average:";
	
	for (int i = 0; i < N; ++i)
	{
		if (x[i] >= avg) cout << " " << x[i];
	}
	cout << endl;
}
//---------------------------------------------------------------------------------------------------------
// Name  : FindMaxMin
// Input : Array a
// Output: int max, int min
//---------------------------------------------------------------------------------------------------------
void FindMaxMin(int x[], int& max, int& min)
{
	max = x[0]; min = x[0];

	for (int i = 0; i < N; ++i)
	{
		if (x[i] > max) max = x[i];
		if (x[i] < min) min = x[i];
	}
}
//---------------------------------------------------------------------------------------------------------
// Name  : DisplayMaxMin
// Input : int max, int min
// Output: None
//---------------------------------------------------------------------------------------------------------
void DisplayMaxMin(int max, int min)
{
	cout << "Maximum = " << max << endl;
	cout << "Minimum = " << min << endl;
}
//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Wed Oct 16 20:34:34 2013
// 
// This is array a: 44 33 19 9 70 11
// Average = 31.00
// Data value above average: 44 33 70
// Maximum = 70
// Minimum = 9
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------