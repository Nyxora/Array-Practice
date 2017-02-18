// --------------------------------------- CPSC 121.3 ----------------------------------------
// Programmer: Megan Bond
// Assignment: 1
// Number: 3
// Project: Create a menu, ask for the user's order, and display cost.
// Changes Made to Original Project: Changed the name of the restaurant and menu items. 
// Changed the set-up to be more like a cashier was assisting the user. Added a display for 
// items orderd. Added a thank you message.
// -------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
	// Constants.
	const float SODA_COKE = 2.10;
	const float FOOD_BURGER = 1.85;

	// Variables.
	double bill;
	int coke, burgers;

	// Display menu title.
	cout << "Welcome to Mega Burger! Home of the Mega Double Burger!\n\nMay I take your order?\n\n";
	cout << "..........MegaBurger..........\n\n" << endl;
	
	// Display menu items.
	cout << setfill('.');
	cout << fixed << showpoint << setprecision(2);
	cout << left << setw(15) << "MegaCoke" << right << setw(11) << "$" << SODA_COKE << endl;
	cout << left << setw(15) << "Mega Dbl Burger" << right << setw(11) << "$" << FOOD_BURGER << endl;
	cout << endl;
	cout << left << setw(30) << "" << endl;
	
	// Request user's order.
	cout << "\nHow many MegaCokes would you like? ";
	cin >> coke;
	cout << "How many Mega Double Burgers would you like? ";
	cin >> burgers;

	// Calculate user's bill.
	bill = (coke * SODA_COKE) + (burgers * FOOD_BURGER);

	// Display user's bill.
	cout << "\nYou ordered " << coke << " MegaCokes and " << burgers << " Mega Double Burgers.\nYour bill comes out to $" << bill << ".\n\nThank you for eating at MegaBurger! " << char(3) << "\n" << endl;

	// Pause program.
	system("pause");

	return 0;
}

// ------------------------- Sample Output ---------------------------
// Welcome to Mega Burger! Home of the Mega Double Burger!
//
// May I take your order?
//
// ..........MegaBurger..........
//
//
// MegaCoke.................$2.10
// Mega Dbl Burger..........$1.85
//
// ..............................
//
// How many MegaCokes would you like? 3
// How many Mega Double Burgers would you like? 2
// 
// You ordered 3 MegaCokes and 2 Mega Double Burgers.
// Your bill comes out to $10.00.
//
// Thank you for eating at MegaBurger! ♥
//
// Press any key to continue . . .
// --------------------------------------------------------------------
