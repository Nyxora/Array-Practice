//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_131, TR 10am
//	      		 Project:		Fibonacci Numbers
//	      		Due Date:		Feb. 18, 2014
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Find the run-time of recursive and non-recursive fibonacci functions.
//---------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

long int Fib(int n);
long int NRFib(int n);

int main ()
{
	// Time stamp.
	time_t timc; time(&timc);
	cout << "Today's time and date: " << ctime(&timc) <<endl;
	
	int start1, start2, finish1, finish2;
	start1 = clock();
	cout << "The 42nd Fibanacci number by recursive function is " << Fib(42) << endl;
	finish1 = clock();
	cout << "Run-Time: " << (finish1-start1)/CLK_TCK << endl;

	start2 = clock();
	cout << "The 42nd Fibanacci number by non-recursive function is: " << NRFib(43) << endl;
	finish2 = clock();
	cout << "Run-Time: " << (finish2-start2)/CLK_TCK << endl;

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}

//---------------------------------------------------------------------------------------------------------
// Name: Fib
// Input: one int
// Output: returns one long int
//---------------------------------------------------------------------------------------------------------
long int Fib(int n)
{
	if(n == 1 || n == 2) return  1;
	else return (Fib(n-1) + Fib(n-2));
}

//---------------------------------------------------------------------------------------------------------
// Name: NRFib
// Input: one int
// Output: returns one long int
//---------------------------------------------------------------------------------------------------------
long int NRFib(int n)
{
	int f1 = 1, f2 = 1, fn;
	for(int i=3; i<n; ++i)
	{
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
	}
	return fn;
}
//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Mon Feb 17 19:05:12 2014
// 
// The 42nd Fibanacci number by recursive function is 267914296
// Run-Time: 11
// The 42nd Fibanacci number by non-recursive function is: 267914296
// Run-Time: 0
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------