//---------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#4 Part 1
//	      		Due Date:		Sept. 26, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Collect data about tshirts on hand and display total # of 
//			t-shirts, # of red shirts, # of Large shirts.
//---------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <fstream>

using namespace std;

enum SIZE {S, M, L, XL};
enum COLORS {RED, BLACK, BLUE, GREEN};

int main ()
{
	time_t p; time(&p);
	cout << "Today's time and date: " << ctime(&p) <<endl;
	
	int t[4][4];

	// Copy data into array t.
	fstream f;

	f.open("invt.txt", ios::in);
	for (COLORS row = RED; row <= GREEN; row = COLORS(row+1))
	{
		for (SIZE col = S; col <= XL; col = SIZE(col+1))
			f >> t[row][col];
	} f.close();

	// Display array t.
	cout << "\tS\tM\tL\tXL" << endl;
	for (COLORS row = RED; row <= GREEN; row = COLORS(row+1))
	{
		switch (row)
		{	
			case RED: cout << "Red\t"; break;
			case BLACK: cout << "Black\t"; break;
			case BLUE: cout << "Blue\t"; break;
			case GREEN: cout << "Green\t"; break;
		}
		for (SIZE col = S; col <= XL; col = SIZE(col+1))
		{
			cout << t[row][col] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	
	// Compute and print the total number of all t-shirts.
	int total = 0;
	for (COLORS row = RED; row <= GREEN; row = COLORS(row+1))
	{
		for (SIZE col = S; col <= XL; col = SIZE(col+1))
			total += t[row][col];
	}
	cout << "Number of t-shits on hand:\t" << total << endl;

	// Compute and print the number of RED shirts.
	int totalRED = 0;
	for (SIZE col = S; col <= XL; col = SIZE(col+1))
		totalRED += t[RED][col];
	cout << "Number of red shirts on hand:\t" << totalRED << endl;

	// Compute and pring the number of all Large shirts.
	int totalL = 0;
	for (COLORS row = RED; row <= GREEN; row = COLORS(row+1))
		totalL += t[row][L];
	cout << "Number of large shirts on hand:\t" << totalL << endl;

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}

//-------------------------------Output--------------------------------
// Today's time and date: Thu Sep 19 16:23:01 2013
//
//         S       M       L       XL
// Red     1       2       3       4
// Black   5       6       7       8
// Blue    9       1       2       3
// Green   4       5       6       7
// 
// Number of t-shits on hand:      73
// Number of red shirts on hand:   10
// Number of large shirts on hand: 18
// 
// Press any key to continue . . .
//---------------------------------------------------------------------
