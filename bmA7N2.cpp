//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#7 Part 2
//	      		Due Date:		Oct. 16, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Use functions to fill array RECORD p, display p, then find and display the avg of ages and gpa.
//---------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Prototype functions.
Display(int a[], int c);
Display(char a[], int c);
Display(string a[], int c);
template <class T> Show(T a[], int c);

int main()
{
	// Arrays.
	int a[5]={1,2,3,4,5};
	char c[6]={"a", "r", "r", "a", "y", "s"};
	string d[3]={"try", "enjoy", "programming"};

	// Call statements.
	Display(a,5); 
	Display(c,6); 
	Display(d,3);
	
	Show(a,5); 
	Show(c,6); 
	Show(d,3);

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
Display(int a[], int c)
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
Display(char a[], int c)
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
Display(string a[], int c)
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
Show(T a[], int c)
{
	if (T == int)
		cout << "Array a using the Show function:";
	if (T == char)
		cout << "Array c using the Show function:";
	if (T == string)
		cout << "Array d using the Show function:";
	for (int i=0; i < c; ++i)
		cout << " " << a[i];
	cout << endl;
}
//------------------------------------------------Output---------------------------------------------------

//---------------------------------------------------------------------------------------------------------
