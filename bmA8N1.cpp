//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#8 Part 1
//	      		Due Date:		Oct. 24, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Display arrays a, b, and, c using functions.
//---------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

// Prototype functions.
template <class T> void ReadData(T x[], int y);
template <class T> void DisplayData(T x[], int y);
float ComputeAve(int x[], float y);
void ComputeAve(float x[], int y, float& z);
template <class T, class S> void ShowAve (T x, S y);
template <class T, class S, class U> void FindMaxMin(T x[], int y, S& max, U& min);
template <class S, class U> void ShowMaxMin(string x, S max, U min);

int main ()
{
	// Time stamp.
	time_t p; time(&p);
	cout << "Today's time and date: " << ctime(&p) <<endl;

	int a[5]; char c[6]; float d[4]; string s[4];
	// Read data into each array (ReadData is a template function).
	cout << "Enter 5 integer numbers: "; ReadData(a, 5);
	cout << "Enter 6 characters: "; ReadData(c, 6);
	cout << "Enter 4 decimal numbers: "; ReadData(d, 4);
	cout << "Enter 4 names: "; ReadData(s, 4);

	// Display all arrays (DisplayData is a template function).
	cout << "\tThis is array a:"; DisplayData(a,5);
	cout << "\tThis is array c:"; DisplayData(c, 6);
	cout << "\tThis is array d:"; DisplayData(d, 4);
	cout << "\tThis is array s:"; DisplayData(s, 4);

	// Compute the average of data in array a and d. ComputeAve is an overloaded function
	// but ShowAve is a template function.
	float A_Average = ComputeAve(a,5);
	ShowAve("The average of numbers in array a is: ", A_Average);
	float D_Average; ComputeAve(d, 4, D_Average);
	ShowAve(D_Average, " is the Average of numbers in array d.");

	//Find the maximum and minimum data in array a and d. FindMaxMin and ShowMaxMin are template functions.
	int amax, amin; float dmax, dmin;
	FindMaxMin(a, 5, amax, amin);
	FindMaxMin(d, 4, dmax, dmin);
	ShowMaxMin("In array a, Maximum and Mininmum are:", amax, amin);
	ShowMaxMin("In array d, Maximum and Minimum are:", dmax, dmin);

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}

//---------------------------------------------------------------------------------------------------------
// Name  : ReadData
// Input : An array of variable type and a variable of int type.
// Output: Data is read into array x.
//---------------------------------------------------------------------------------------------------------
template <class T> void ReadData(T x[], int y)
{
	for (int i=0; i<y; ++i)
		cin >> x[i];
}
//---------------------------------------------------------------------------------------------------------
// Name  : DisplayData
// Input : An array of variable type and a variable of int type.
// Output: None
//---------------------------------------------------------------------------------------------------------
template <class T> void DisplayData(T x[], int y)
{
	for (int i=0; i<y; ++i)
		cout << " " << x[i];
	cout << endl;
}
//---------------------------------------------------------------------------------------------------------
// Name  : ComputeAve
// Input : An array of int type and a variable of float type.
// Output: A float through y.
//---------------------------------------------------------------------------------------------------------
float ComputeAve(int x[], float y)
{
	float total = 0;
	for (int i=0; i<y; ++i)
	{
		total += x[i];
	}
	return total/y;
}
//---------------------------------------------------------------------------------------------------------
// Name  : ComputeAve
// Input : An array of float type and variable of int type.
// Output: A float through variable z.
//---------------------------------------------------------------------------------------------------------
void ComputeAve(float x[], int y, float& z)
{
	float total = 0;
	for (int i=0; i<y; ++i)
	{
		total += x[i];
	}
	z = total/y;
}
//---------------------------------------------------------------------------------------------------------
// Name  : ShowAve
// Input : Two variables of variable type.
// Output: None
//---------------------------------------------------------------------------------------------------------
template <class T, class S> void ShowAve (T x, S y)
{
	cout << fixed << showpoint << setprecision(2);
	cout << x << y << endl;
}
//---------------------------------------------------------------------------------------------------------
// Name  : FindMaxMin
// Input : An array of float type and variable of int type.
// Output: Two variables of variable through max and min.
//---------------------------------------------------------------------------------------------------------
template <class T, class S, class U> void FindMaxMin(T x[], int y, S& max, U& min)
{
	max = x[0]; min = x[0];
	for (int i=0; i<y; ++i)
	{
		if (x[i] < min) min = x[i];
		if (x[i] > max) max = x[i];
	}
}
//---------------------------------------------------------------------------------------------------------
// Name  : ShowMaxMin
// Input : A variable of string, and two variables of variable type.
// Output: None
//---------------------------------------------------------------------------------------------------------
template <class S, class U> void ShowMaxMin(string x, S max, U min)
{
	cout << fixed << showpoint << setprecision(2);
	cout << x << " " << max << " " << min << endl;
}
//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Thu Oct 17 16:32:37 2013
// 
// Enter 5 integer numbers: 9 3 8 2 7
// Enter 6 characters: C S U F C S
// Enter 4 decimal numbers: 2.3 7.5 8.33 4.1
// Enter 4 names: Tom Bob Mary John
//         This is array a: 9 3 8 2 7
//         This is array c: C S U F C S
//         This is array d: 2.3 7.5 8.33 4.1
//         This is array s: Tom Bob Mary John
// The average of numbers in array a is: 5.80
// 5.56 is the Average of numbers in array d.
// In array a, Maximum and Mininmum are: 9 2
// In array d, Maximum and Minimum are: 8.33 2.30
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------
