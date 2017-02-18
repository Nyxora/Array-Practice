// --------------------- CPSC 121.3 ---------------------
// Programmer: Megan Bond
// Assignment: 1
// Number: 1
// Project: Calculate balance of an account after 5 years
//			using B=Pe^rt.
// ------------------------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	// Variables.
	float deposit, balance, rate, time;

	// Get deposit.
	cout << "Enter the ammount of money you want to deposit now: $";
	cin >> deposit;
	
	// Get interest rate.
	cout << "Enter the interest rate: ";
	cin >> rate;
	
	// Get duration.
	cout << "Enter the duratation in years: ";
	cin >> time;
	
	// Calculate balance.
	balance = deposit * exp( rate * time );

	// Set display as fixed.
	cout << fixed << showpoint << setprecision(2);

	// Display balance.
	cout << "Your balance: $" << balance << endl;
	
	// Pause program.
	system("pause");

	return 0;
}

// --------------------- Sample Output ----------------------
// Enter the ammount of money you want to deposit now: $20000
// Enter the interest rate: .05
// Enter the duratation in years: 5
// Your balance: $25680.51
// Press any key to continue . . .
// ----------------------------------------------------------