//-------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#4 Part 2
//	      		Due Date:		Sept. 26, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Calculate and display requested totals of total inventory,
//			# Blue, # Large, # Short Sleeved, # Small Green, & # Green
//			Short Sleeved.
//-------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <fstream>

using namespace std;

enum COLOR {Red, Green, Blue};
enum SIZE {S, M, L, XL};
enum STYLE {ShortSleeves, LongSleeves};

int main ()
{
	time_t p; time(&p);
	cout << "Today's time and date: " << ctime(&p) <<endl;
	
	// Array.
	int inv[3][4][2] = { 2,2,2,2, 3,3,3,3, 4,4,4,4, 5,5,5,5, 6,6,6,6, 7,7,7,7 };

	// Compute and display Total Inventory.
	int totalInv = 0;
	for(STYLE slice = ShortSleeves; slice <= LongSleeves; slice = STYLE(slice+1))
	{
		for(COLOR row = Red; row <= Blue; row = COLOR(row+1))
		{
			for(SIZE col = S; col <= XL; col = SIZE(col+1))
			{
				totalInv += inv[row][col][slice];
			}
		}
	}
	cout << "Total Inventory:\t\t  " << totalInv << endl;

	// Compute and display # Blue Shirts.
	int totalBlu = 0;
	for(STYLE slice = ShortSleeves; slice <= LongSleeves; slice = STYLE(slice+1))
	{
		for(SIZE col = S; col <= XL; col = SIZE(col+1))
		{
			totalBlu += inv[Blue][col][slice];
		}
	}
	cout << "Total Blue Shirts:\t\t  " << totalBlu << endl;

	// Compute and display # Large Shirts.
	int totalLar = 0;
	for(STYLE slice = ShortSleeves; slice <= LongSleeves; slice = STYLE(slice+1))
	{
		for(COLOR row = Red; row <= Blue; row = COLOR(row+1))
		{
			totalLar += inv[row][L][slice];
		}
	}
	cout << "Total Large Shirts:\t\t  " << totalLar << endl;

	// Compute and display # Short Sleeve Shirts.
	int totalSss = 0;
	for(COLOR row = Red; row <= Blue; row = COLOR(row+1))
	{
		for(SIZE col = S; col <= XL; col = SIZE(col+1))
		{
			totalSss += inv[row][col][ShortSleeves];
		}
	}
	cout << "Total Short Sleeved Shirts:\t  " << totalSss << endl;

	// Compute and display # Small Green Shirts.
	int totalSGr = 0;
	for(STYLE slice = ShortSleeves; slice <= LongSleeves; slice = STYLE(slice+1))
	{
		totalSGr += inv[Green][S][slice];
	}
	cout << "Total Small Green Shirts:\t  " << totalSGr << endl;

	// Compute and display # Green Short Sleeve Shirts.
	int totalSsg = 0;
	for(SIZE col = S; col <= XL; col = SIZE(col+1))
	{
		totalSsg += inv[Green][col][ShortSleeves];
	}
	cout << "Total Short Sleeved Green Shirts: " << totalSsg << endl;

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}

//------------------------------------Output-------------------------------------
// Today's time and date: Wed Sep 25 21:46:47 2013
// 
// Total Inventory:                  108
// Total Blue Shirts:                52
// Total Large Shirts:               30
// Total Short Sleeved Shirts:       54
// Total Small Green Shirts:         8
// Total Short Sleeved Green Shirts: 18
// 
// Press any key to continue . . .
//-------------------------------------------------------------------------------
