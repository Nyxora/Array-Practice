//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#12 Part 3
//	      		Due Date:		Nov. 21, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Collect data from data.txt and put into array a of object P, then display data.
//---------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <cctype>
#include <cstring>
#include <algorithm>
#include <fstream>

using namespace std;

template <int n> class THREE
{
private: struct PRESIDENT
         {
			 string name;
			 int age;
         };
		 PRESIDENT a[n];
public:  THREE();
		 float ComputeAgeAve();
		 void DisplayName(float AgeAve);
		 ~THREE(){}
};

int main()
{
	// Time stamp.
	time_t timc; time(&timc);
	cout << "Today's time and date: " << ctime(&timc) << endl;

	// Call statements.
	THREE <5> P;
	float ave = P.ComputeAgeAve();
	P.DisplayName(ave);
	
	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}
//---------------------------------------------------------------------------------------------------------
// Name: THREE (constructor)
// Input: none
// Output: fills array a with data from data.txt
//---------------------------------------------------------------------------------------------------------
template <int n>
THREE <n> :: THREE()
{
	fstream f; f.open("data.txt", ios::in);
	for(int i=0; i<n; ++i)
	{
		f >> a[i].name >> a[i].age;
	}
	//f.close();
}
//---------------------------------------------------------------------------------------------------------
// Name: DisplayName
// Input: one variable of float type through AgeAve
// Output: none
//---------------------------------------------------------------------------------------------------------
template <int n>
void THREE <n> :: DisplayName(float AgeAve)
{
	cout << "Five US Presidents: ";
	for (int i = 0; i<n; ++i)
		cout  << "\n\t"<< a[i].name;
	cout << endl;
	cout << "The average age is: " << AgeAve << endl;
	cout << "Presidents above the average age: ";
	for (int i = 0; i<n; ++i)
	{
		if (a[i].age > AgeAve) cout << a[i].name << " ";
	}
	cout << endl;
}
//---------------------------------------------------------------------------------------------------------
// Name: ComputeAgeAve
// Input: none
// Output: returns a float
//---------------------------------------------------------------------------------------------------------
template <int n>
float THREE <n> :: ComputeAgeAve()
{
	float tot = 0, x = n;
	for(int i=0; i<n; ++i)
		tot += a[i].age;
	return tot/x;
}

//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Thu Nov 21 00:20:55 2013
// 
// Five US Presidents:
//         Carter,Jimmy
//         Reagan,Ronald
//         Bush,George
//         Clinton,Bill
//         Obama,Barack
// The average age is: 53.6
// Presidents above the average age: Reagan,Ronald Bush,George
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------