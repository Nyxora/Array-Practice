//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#6 Part 2
//	      		Due Date:		Oct. 10, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Get three integers from user input. Find the total, min, max and average of these integers, 
//			then display the results.
//---------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

// Prototype functions.
void ReadData(int& x, int& y, int& z);
int ComputeSum(int x, int y, int z);
void ComputeAverage(int x, int y, int z, float& avg);
void Display(int x, int y, int z, int tot, float avg);
void FindMaxMin(int x, int y, int z, int& max, int& min);
void DisplayMinMax(int x, int y, int z, int max, int min);

int main ()
{
	// Time stamp.
	time_t p; time(&p);
	cout << "Today's time and date: " << ctime(&p) <<endl;

	// Read Data into x, y, and z.
	int x, y, z;
	ReadData(x, y, z);

	// Compute the total of x, y, and z.
	int total;
	total = ComputeSum(x, y, z);

	//Compute the average of x, y, and z.
	float average;
	ComputeAverage(x, y, z, average);
	
	// Display total and average of x, y, and z.
	Display(x, y, z, total, average);

	// Find the maximum and minimum of x, y, and z.
	int max, min;
	FindMaxMin(x, y, z, max, min);

	// Display the max and min values.
	DisplayMinMax(x, y, z, max, min);

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}

//---------------------------------------------------------------------------------------------------------
// Name  : ReadData
// Input : None
// Output: Returns int values to x, y, and z.
//---------------------------------------------------------------------------------------------------------
void ReadData(int& x, int& y, int& z)
{
	cout << "Enter three integer numbers: ";
	cin >> x >> y >> z;
}
//---------------------------------------------------------------------------------------------------------
// Name  : ComputeSum
// Input : One value of char type
// Output: Returns the sum of the input values as type int.
//---------------------------------------------------------------------------------------------------------
int ComputeSum(int x, int y, int z)
{
	return x + y + z;
}
//---------------------------------------------------------------------------------------------------------
// Name  : ComputeAverage
// Input : Three values of int type through x, y, and z.
// Output: One value of float type through avg
//---------------------------------------------------------------------------------------------------------
void ComputeAverage(int x, int y, int z, float& avg)
{
	avg = (x + y + z)/3.;
}
//---------------------------------------------------------------------------------------------------------
// Name  : Display
// Input : 4 values of int type through x, y, z, and tot and 1 value of float type through avg
// Output: None
//---------------------------------------------------------------------------------------------------------
void Display(int x, int y, int z, int tot, float avg)
{
	cout << "\tTotal of " << x << ", " << y << ", and " << z << " is " << tot <<endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "\tThe average of " << x << ", " << y << ", and " << z << " is " << avg <<endl;
}
//---------------------------------------------------------------------------------------------------------
// Name  : FindMaxMin
// Input : 3 values of int type through x, y, and z
// Output: 2 values of int type through max and min
//---------------------------------------------------------------------------------------------------------
void FindMaxMin(int x, int y, int z, int& max, int& min)
{
	max = x; min = x;
	if (y > max) max = y;
	if (z > max) max = z;
	if (y < min) min = y;
	if (z < min) min = z;
}
//---------------------------------------------------------------------------------------------------------
// Name  : DisplayMinMax
// Input : 5 values of int type through x, y, z, max, and min.
// Output: None
//---------------------------------------------------------------------------------------------------------
void DisplayMinMax(int x, int y, int z, int max, int min)
{
	cout << "\tThe min and max of " << x << ", " << y << ", and " << z << " is " << min << " and " 
		 << max <<endl;;
}

//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Tue Oct 08 22:05:22 2013
// 
// Enter three integer numbers: 5 2 8
//         Total of 5, 2, and 8 is 15
//         The average of 5, 2, and 8 is 5.00
//         The min and max of 5, 2, and 8 is 2 and 8
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------
// Today's time and date: Tue Oct 08 22:06:31 2013
// 
// Enter three integer numbers: 12 23 32
//         Total of 12, 23, and 32 is 67
//         The average of 12, 23, and 32 is 22.33
//         The min and max of 12, 23, and 32 is 12 and 32
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------
