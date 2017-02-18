//-------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#4 Part 3
//	      		Due Date:		Sept. 26, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Display the given arrays, then fix mistakes in the array, then 
//			display the fixed arrays.
//-------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

int main ()
{
	// Time stamp.
	time_t p; time(&p);
	cout << "Today's time and date: " << ctime(&p) <<endl;

	// Array.
	string Days[7] = {"Mon", "Tues", "wed", "Thr", "Fri", "Sat", "Sun"};
	char names[4][10] = {"Austin", "Mandana", "robert", "John"};

	// Display both arrays.
	cout << "The original arrays:" << endl << endl;

	for(int i = 0; i < 7; ++i)
	{
		cout << Days[i] << " ";
	} 
	cout << endl;
	
	for(int i = 0; i < 4; ++i)
	{
		cout << names[i] << " ";
	} 
	cout << endl << endl;

	// Change 'w' in 'wed' of array Days to upper case.
	Days[2][0] = char(int(Days[2][0]-32));

	// Change 'r' in 'robert' of array names to upper case.
	names[2][0] = char(int(names[2][0]-32));

	// Display fixed arrays.
	cout << "The fixed arrays:" << endl << endl;

	for(int i = 0; i < 7; ++i)
	{
		cout << Days[i] << " ";
	} 
	cout << endl;
	
	for(int i = 0; i < 4; ++i)
	{
		cout << names[i] << " ";
	} 
	cout << endl;

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}
//------------------------------------Output-------------------------------------
// Today's time and date: Wed Sep 25 23:47:50 2013
//
// The original arrays:
// 
// Mon Tues wed Thr Fri Sat Sun
// Austin Mandana robert John
// 
// The fixed arrays:
// 
// Mon Tues Wed Thr Fri Sat Sun
// Austin Mandana Robert John
// 
// Press any key to continue . . .
//-------------------------------------------------------------------------------

//-------------------------------------------------------------------------------
//   || What I got when trying to use struct. I could not figure out a fix. ||
// Today's time and date: Wed Sep 25 23:32:50 2013
//
// 0034F354 0034F45C 0034F564 0034F66C 0034F774 0034F87C 0034F984
// 
// 0034F434 0034F53C 0034F644 0034F74C
// 
// Press any key to continue . . .
//-------------------------------------------------------------------------------