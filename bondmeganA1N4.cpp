// --------------------------------------- CPSC 121.3 ----------------------------------------
// Programmer: Megan Bond
// Assignment: 1
// Number: 4

// Project: Find the area and perimiter of a triangle.
// Changes Made to Original Project: Some wording. Added display of entries.
// -------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main ()
{
	// Variables.
	float sidea, sideb, sidec, area, perimeter, x;
	const float rad = .5;
	// Get 3 measurements.
	cout << "Please enter the measurements of the three sides: ";
	cin >> sidea >> sideb >> sidec;

	//Display the measurements.
	cout << fixed << showpoint << setprecision(2);
	cout << "\nSide a = " << sidea << "\nSide b = " << sideb << "\nSide c = " << sidec << "\n" << endl;

	// Calculate then display perimeter.
	perimeter = (sidea + sideb + sidec)/2;
	cout << fixed << showpoint << setprecision(2);
	cout << "The perimeter is " << perimeter << ".\n" << endl;

	// Calculate then display area.
	x = perimeter * (perimeter-sidea) * (perimeter-sideb) * (perimeter-sidec);
	area = pow(x , rad);
	cout << fixed << showpoint << setprecision(2);
	cout << "The area is " << area << ".\n" << endl;

	// Pause program.
	system("pause");

	return 0;
}

// -------------------------- Sample Output ----------------------------
// Please enter the measurements of the three sides: 33.185 21.234 13.80
//
// Side a = 33.19
// Side b = 21.23
// Side c = 13.80
//
// The perimeter is 34.11.
// 
// The area is 90.81.
// 
// Press any key to continue . . .
// ----------------------------------------------------------------------