//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#7 Part 4
//	      		Due Date:		Oct. 16, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Use functions to display the arrays.
//---------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

// Prototype functions.
void Display(int a[], int c);
void Display(char a[], int c);
void Display(string a[], int c);
template <class T> void Show(T a[], int c);

int main()
{
	// Time stamp.
	time_t p; time(&p);
	cout << "Today's time and date: " << ctime(&p) <<endl;

	// Arrays.
	int a[5]={1,2,3,4,5};
	char c[6]={'a', 'r', 'r', 'a', 'y', 's'};
	string d[3]={"try", "enjoy", "programming"};

	// Call statements.
	Display(a,5); Display(c,6); Display(d,3); cout << endl;
	cout << "Array a using the Show function:"; Show(a,5); 
	cout << "Array c using the Show function:"; Show(c,6); 
	cout << "Array d using the Show function:"; Show(d,3);

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}
//---------------------------------------------------------------------------------------------------------
// Name  : Display
// Input : an array and an int
// Output: None
//---------------------------------------------------------------------------------------------------------
void Display(int a[], int c)
{
	cout << "Array a using the Display function:";
	for (int i=0; i < c; ++i)
		cout << " " << a[i];
	cout << endl;
}
//---------------------------------------------------------------------------------------------------------
// Name  : Display
// Input : an array and an int
// Output: None
//---------------------------------------------------------------------------------------------------------
void Display(char a[], int c)
{
	cout << "Array c using the Display function:";
	for (int i=0; i < c; ++i)
		cout << " " << a[i];
	cout << endl;
}
//---------------------------------------------------------------------------------------------------------
// Name  : Display
// Input : an array and an int
// Output: None
//---------------------------------------------------------------------------------------------------------
void Display(string a[], int c)
{
	cout << "Array d using the Display function:";
	for (int i=0; i < c; ++i)
		cout << " " << a[i];
	cout << endl;
}
//---------------------------------------------------------------------------------------------------------
// Name  : Display
// Input : an array and an int
// Output: None
//---------------------------------------------------------------------------------------------------------
template <class T>
void Show(T a[], int c)
{ 
	for (int i=0; i < c; ++i)
		cout << " " << a[i];
	cout << endl;
}
//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Thu Oct 17 02:45:37 2013
// 
// Array a using the Display function: 1 2 3 4 5
// Array c using the Display function: a r r a y s
// Array d using the Display function: try enjoy programming
//
// Array a using the Show function: 1 2 3 4 5
// Array c using the Show function: a r r a y s
// Array d using the Show function: try enjoy programming
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------
