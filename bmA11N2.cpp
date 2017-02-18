//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#11 Part 6
//	      		Due Date:		Oct. 31, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Find the perimeter of a rectangle with vertecies supplied by user.
//---------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <cctype>
#include <cstring>
#include <cmath>
using namespace std;

class POINT
{
	private: int x, y;
	public:  POINT();
			 void ReadVertex(char vertex);
			 friend void Display(POINT P, char vertex);
			 friend float Distance(POINT P, POINT Q);
			 friend void Display(float AB, float AC, float CD, float BD);
			 ~POINT(){}
};

int main ()
{
	// Time stamp.
	time_t tim; time(&tim);
	cout << "Today's time and date: " << ctime(&tim) <<endl;
	
	// Get vertex's.
	POINT A, B, C, D;
	A.ReadVertex('A'); B.ReadVertex('B'); C.ReadVertex('C'); D.ReadVertex('D');
	
	// Draw the rectangle.
	cout << "\t\t"; Display(A, 'A'); cout << "--------------------"; Display(B,'B'); cout << endl;
	cout << "\t\t       |                  |"; cout << endl;
	cout << "\t\t       |                  |"; cout << endl;
	cout << "\t\t       |                  |"; cout << endl;
	cout << "\t\t"; Display(C, 'C'); cout << "--------------------"; Display(D,'D'); cout << endl;
	
	// Compute the length of each side.
	cout << fixed << showpoint << setprecision(2);
	float AB = Distance(A,B); cout << "\tLength of AB = "<< AB << endl;
	float AC = Distance(A,C); cout << "\tLength of AC = "<< AC << endl;	
	float CD = Distance(C,D); cout << "\tLength of CD = "<< CD << endl;
	float BD = Distance(B,D); cout << "\tLength of BD = "<< BD << endl;

	// Compute and Display perimeter.
	Display(AB, AC, CD, BD);

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}
//---------------------------------------------------------------------------------------------------------
// Name: POINT
// Input: none
// Output: x and y of object will be filled.
//---------------------------------------------------------------------------------------------------------
POINT :: POINT()
{
	x = 0; y = 0; 
}
//---------------------------------------------------------------------------------------------------------
// Name: ReadVertex
// Input: none
// Output: x and y of object will be filled.
//---------------------------------------------------------------------------------------------------------
void POINT :: ReadVertex(char vertex)
{
	cout << "Enter the x and y coordinates of vertex " << vertex << ": "; cin >> x >> y;
}
//---------------------------------------------------------------------------------------------------------
// Name: Display
// Input: a POINT type and a char type.
// Output: none
//---------------------------------------------------------------------------------------------------------
void Display(POINT P, char vertex)
{
	cout << fixed << showpoint << setprecision(2);
	cout << vertex << "(" << P.x << "," << P.y << ")";
}
//---------------------------------------------------------------------------------------------------------
// Name: Distance
// Input: Two POINT TYPES
// Output: A float.
//---------------------------------------------------------------------------------------------------------
float Distance(POINT P, POINT Q)
{
	return sqrt(pow((P.x-Q.x), 2.) + pow((P.y-Q.y), 2.));
}
//---------------------------------------------------------------------------------------------------------
// Name: Display
// Input: Four variables of float type.
// Output: none
//---------------------------------------------------------------------------------------------------------
void Display(float AB, float AC, float CD, float BD)
{
	cout << fixed << showpoint << setprecision(2);
	cout << "\t\tPerimeter = " << AB + AC + CD + BD << endl;
}
//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Wed Nov 13 17:22:00 2013
// 
// Enter the x and y coordinates of vertex A: 10 7
// Enter the x and y coordinates of vertex B: 20 7
// Enter the x and y coordinates of vertex C: 10 2
// Enter the x and y coordinates of vertex D: 20 2
//                 A(10,7)--------------------B(20,7)
//                        |                  |
//                        |                  |
//                        |                  |
//                 C(10,2)--------------------D(20,2)
//         Length of AB = 10.00
//         Length of AC = 5.00
//         Length of CD = 10.00
//         Length of BD = 5.00
//                 Perimeter = 30.00
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------