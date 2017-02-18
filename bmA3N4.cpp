//-----------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#3 Part 4
//	      		Due Date:		Sept. 19, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Read data from text file, display information from text file. Find the oldest student and
//			display the oldest student. Display the names of all teenage students.
//-----------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
	// Date and Time
	time_t p; time(&p); cout << "Today's time and date: " << ctime(&p);

	// Arrays and Variables.
	string Name[15];
	int Age[15];
	fstream g;

	// Title.
	cout << "\t" << left << setw(12) << "   Name" << "\tAge" << endl;
	cout << setfill(char(196));
	cout << "\t" << left << setw(20) << "" << endl;
	
	// Collect data from the file.
	g.open("C:\\Users\\Nyxora\\Documents\\Visual Studio 2010\\Projects\\bmA3N4\\bmA3N4\\data.txt", ios::in);
			// It didn't want to work without the file path.

	cout << setfill(' ');
	int i = 0;
	g >> Name[i] >> Age[i];
	
	while (!g.eof())
	{
		cout << "\t" << left << setw(15) << Name[i] << right << setw(4) << Age[i] << endl;
		i++;
		g >> Name[i] >> Age[i];
	} 
	g.close();

	// Find and display oldest student.
	int eldest = Age[0], oldest;
	for (int k = 0; k <= i; ++k)
	{
		if (Age[k] > eldest) 
		{ 
			eldest = Age[k];
			oldest = k;
		}
	}
	cout << "Oldest student: " << Name[oldest] << endl;

	// Find and display all teenage students.
	bool z = false;
	cout << "Name of teenage students: ";
	for (int u = 0; u <= i-1; ++u)
	{
		if (Age[u] < 20)
		{
			if (z == true) 
			{
				cout << ", ";
			}
			cout << Name[u];
		}
		z = true;
	}
	cout << endl;

	// pause and return
	system("pause");
	return 0;
}

//----------------------------------------------------Output---------------------------------------------
// Today's time and date: Wed Sep 18 22:12:59 2013
//            Name         Age
//         ────────────────────
//         Jefferson        17
//         Bill             24
//         Mary             19
//         Jack             22
//         Matthew          19
//         Claudia          23
//         Judy             18
// Oldest student: Bill
// Name of teenage students: Jefferson, Mary, Matthew, Judy
// Press any key to continue . . .
//-------------------------------------------------------------------------------------------------------