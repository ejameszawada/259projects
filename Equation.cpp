/* Course: CSCI 259, Section 2
 Student Name: Ethan Zawada
 Student ID: 10627257
 Program 2 Homework
 Due Date: 2/25/20
 In keeping with the Honor Code of UM, I have neither
 given nor received assistance from anyone other than the instructor.

 Program Description: This program takes user input for 3 values and runs those numbers
 in an equation to see if it is greater less than or equal to zero. Depending on this
 it will print out either 2, 1, or no roots using a formula to find said roots.
*/


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//declare variables
	int a, b, c;
	//obtain user input
	cout << "Enter the A coefficient: ";
	cin >> a;
	cout << "Enter the B coefficient: ";
	cin >> b;
	cout << "Enter the C coefficient: ";
	cin >> c;
	//calculate the discriminant to compare it to zero
	double dis = pow(b, 2) - (4.0 * (a * c));
	//calculate both possible roots
	double r1 = (-1.0 * b + sqrt(dis)) / (2.0 * a);
	double r2 = (-1.0 * b - sqrt(dis)) / (2.0 * a);
	//if discriminant is greater than zero then two roots print
	if (dis > 0) {
		cout << a << ", " << b << ", and " << c << " coefficients have two real roots:";
		printf("\n\tr1 = %.2f", r1);
		printf("\n\tr2 = %.2f", r2);
	}
	//if discriminant equals zero than one root prints
	else if (dis == 0) {
		cout << a << ", " << b << ", and " << c << " coefficients have one real root:";
		printf("\n\tr = %.2f", r1);
	}
	//if discriminant is less than zero than no roots
	else
		cout << a << ", " << b << ", and " << c << " coefficients have no real roots";

	return 0;
}
