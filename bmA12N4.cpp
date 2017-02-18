//---------------------------------------------------------------------------------------------------------
//					Name:		Megan A. Bond
//				  Course:		CS_121, Section Thursday
//	      		 Project:		#12 Part 4
//	      		Due Date:		Nov. 21, 2013
//	     	   Professor:		Ray Ahmadnia
//
// Purpose: Create a progam with overloaded operators to allow for easy manipulation of two points.
//---------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

class POINTS
{
	private: int x, y;
	public:  void ReadPoints(char w);
			 friend POINTS operator+(POINTS p1, POINTS p2);
			 friend POINTS operator-(POINTS p1, POINTS p2);
			 friend POINTS operator*(int k, POINTS p);
			 friend POINTS operator++(POINTS p);
			 friend POINTS operator--(POINTS p);
			 friend float Distance(POINTS f, POINTS g);
			 friend void Show(char v, POINTS p);
			 ~POINTS(){}
};

int main ()
{
	// Time stamp.
	time_t timc; time(&timc);
	cout << "Today's time and date: " << ctime(&timc) <<endl;
	
	POINTS A, B; char a = 'A', b = 'B', c = 'C'; int k;
	A.ReadPoints(a); B.ReadPoints(b);
	POINTS C = A + B;
	cout << "\t"; Show(a, A); cout << " + "; Show(b, B); cout << " = "; Show(c, C); cout << endl;

	POINTS D = A - B;
	cout << "\t"; Show(a, A); cout << " - "; Show(b, B); cout << " = "; Show(c, D); cout << endl;

	POINTS G = A++;
	cout << "\t"; Show(a, A); cout << "++ = "; Show(c, G); cout << endl;

	POINTS F = A--;
	cout << "\t"; Show(a, A); cout << "-- = "; Show(c, F); cout << endl;

	cout << "Enter a constant: "; cin >> k;
	POINTS E = k * A;
	cout << "\t" << k << " * "; Show(a, A); cout << " = "; Show(c, E); cout << endl;

	float DistAB = Distance(A, B);
	cout << fixed << showpoint << setprecision(2);
	cout << "\tThe distance from "; Show(a, A); cout << " to "; Show(b, B); cout << " is " << DistAB << endl;

	// Terminate program.
	cout << endl;
	system("pause");
	return 0;
}
//---------------------------------------------------------------------------------------------------------
// Name: ReadPoints
// Input: one variable of char type
// Output: returns x and y values of calling POINTS object
//---------------------------------------------------------------------------------------------------------
void POINTS :: ReadPoints(char w)
{
	cout << "Enter coordinates of point " << w << ": ";
	cin >> x >> y;
}
//---------------------------------------------------------------------------------------------------------
// Name: operator+
// Input: Two POINTS objects
// Output: returns x and y values through POINTS object z
//---------------------------------------------------------------------------------------------------------
POINTS operator+(POINTS p1, POINTS p2)
{
	POINTS z;
	z.x = p1.x + p2.x;
	z.y = p1.y + p2.y;
	return z;
}
//---------------------------------------------------------------------------------------------------------
// Name: operator-
// Input: Two POINTS objects
// Output: returns x and y values through POINTS object t
//---------------------------------------------------------------------------------------------------------
POINTS operator-(POINTS p1, POINTS p2)
{
	POINTS t;
	t.x = p1.x - p2.x;
	t.y = p1.y - p2.y;
	return t;
}
//---------------------------------------------------------------------------------------------------------
// Name: operator*
// Input: one variable of int type and one POINTS object
// Output: returns x and y values through POINTS object s
//---------------------------------------------------------------------------------------------------------
POINTS operator*(int k, POINTS p)
{
	POINTS s;
	s.x = k * p.x;
	s.y = k * p.y;
	return s;
}
//---------------------------------------------------------------------------------------------------------
// Name: operator++
// Input: one POINTS object
// Output: returns x and y values through POINTS object u
//---------------------------------------------------------------------------------------------------------
POINTS operator++(POINTS p)
{
	POINTS u;
	u.x = p.x + 1;
	u.y = p.y + 1;
	return u;
}
//---------------------------------------------------------------------------------------------------------
// Name: operator--
// Input: one POINTS object
// Output: returns x and y values through POINTS object v
//---------------------------------------------------------------------------------------------------------
POINTS operator--(POINTS p)
{
	POINTS v;
	v.x = p.x - 1;
	v.y = p.y - 1;
	return v;
}
//---------------------------------------------------------------------------------------------------------
// Name: Distance
// Input: Two POINTS objects
// Output: returns a float
//---------------------------------------------------------------------------------------------------------
float Distance(POINTS f, POINTS g)
{
	return sqrt(pow(f.x-g.x, 2.) + pow(f.y-g.y, 2.));
}
//---------------------------------------------------------------------------------------------------------
// Name: Show
// Input: one variable of char type and one POINTS object
// Output: none
//---------------------------------------------------------------------------------------------------------
void Show(char v, POINTS p)
{
	cout << v << "(" << p.x << "," << p.y << ")";
}
//------------------------------------------------Output---------------------------------------------------
// Today's time and date: Thu Nov 21 01:39:26 2013
// 
// Enter coordinates of point A: 2 3
// Enter coordinates of point B: 5 7
//         A(2,3) + B(5,7) = C(7,10)
//         A(2,3) - B(5,7) = C(-3,-4)
//         A(2,3)++ = C(3,4)
//         A(2,3)-- = C(1,2)
// Enter a constant: 4
//         4 * A(2,3) = C(8,12)
//         The distance from A(2,3) to B(5,7) is 5.00
// 
// Press any key to continue . . .
//---------------------------------------------------------------------------------------------------------
