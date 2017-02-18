//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#7 Part 3
//	      		Due Date:		Oct. 10, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Display arrays a, b, and, c using functions.
//---------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

// Prototype functions.
void DisplayA (int a[]);
void DisplayB (int b[][4]);
void DisplayC (int c[][3][2]);

int main ()
{
	// Time stamp.
	time_t p; time(&p);
	cout << "Today's time and date: " << ctime(&p) <<endl;

	// Arrays.
	int a[5] = {1, 2, 3, 4, 5};
	int b[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10, 11, 12};
	int c[2][3][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10, 11, 12};

	// Call statements.
	DisplayA(a);
	DisplayB(b);
	DisplayC(c);

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}

//---------------------------------------------------------------------------------------------------------
// Name  : DisplayA
// Input : Array a
// Output: None
//---------------------------------------------------------------------------------------------------------
void DisplayA (int x[ ])
{
	cout << "This is array a" << endl;
	for (int i = 0; i < 5; ++i) 
	{ cout << "  " << x[i]; }
	cout << endl;
}
//---------------------------------------------------------------------------------------------------------
// Name  : DisplayB
// Input : Array b
// Output: None
//---------------------------------------------------------------------------------------------------------
void DisplayB (int z[ ][4])
{
	cout << "This is array b\n";
	for (int m = 0; m < 3; ++m)
	{
		for (int h = 0; h < 4; ++h)
		{
			if (m > 1 && h > 1)
				cout << "  " << z[m][h];
			else 
				cout << "   " << z[m][h];
		}
		cout << endl;
	}	
}
//---------------------------------------------------------------------------------------------------------
// Name  : DisplayC
// Input : Array c
// Output: None
//---------------------------------------------------------------------------------------------------------
void DisplayC (int y[ ][3][2])
{
	cout << "This is array c\nRow=0\n";
	for (int j = 0; j < 3; ++j)
	{
		cout << " ";
		for (int k = 0; k < 2; ++k)
			cout << "   " << y[0][j][k];
		cout << endl;
	}
	cout << "Row=1\n";
	for (int n = 0; n < 3; ++n)
	{
		cout << " ";
		for (int l = 0; l < 2; ++l)
		{
			if (n < 2)
			{
				cout << "   " << y[1][n][l];
			}
			else
			{
				cout << "  " << y[1][n][l] << " ";
			}
		}
		cout << endl;
	}
}
//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Thu Oct 10 16:36:23 2013
// This is array a
//   1  2  3  4  5
// This is array b
//    1   2   3   4
//    5   6   7   8
//    9   10  11  12
// This is array c
// Row=0
//     1   2
//     3   4
//     5   6
// Row=1
//     7   8
//     9   10
//    11   12
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------