/* Course: CSCI 259, Section 2
 Student Name: Ethan Zawada
 Student ID: 10627257
 Lab 3 in class
 Due Date: 3/3/20
 In keeping with the Honor Code of UM, I have neither
 given nor received assistance from anyone other than the instructor.

 Program Description: This program obtains user input for 9 digits of an ISBN number and calculates the 
 10th digit and depending on if that 10th digit is equal to 10 it will print an X for the 10th digit
 and if it is not it will just print the number.
*/

#include <iostream>
using namespace std;

int main()
{
	//declar variables
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;
	//get user input
	cout << "Enter the first ISBN digit: ";
	cin >> d1;
	cout << "Enter the second ISBN digit: ";
	cin >> d2;
	cout << "Enter the third ISBN digit: ";
	cin >> d3;
	cout << "Enter the fourth ISBN digit: ";
	cin >> d4;
	cout << "Enter the fifth ISBN digit: ";
	cin >> d5;
	cout << "Enter the sixth ISBN digit: ";
	cin >> d6;
	cout << "Enter the seventh ISBN digit: ";
	cin >> d7;
	cout << "Enter the eighth ISBN digit: ";
	cin >> d8;
	cout << "Enter the ninth ISBN digit: ";
	cin >> d9;
	//calculate 10th digit
	d10 = ((d1 *1) + (d2 * 2) + (d3 * 3) + (d4 * 4) + (d5 * 5) + (d6 * 6) + (d7 * 7)+ (d8 * 8) + (d9 * 9)) % 11;
	//switch case will print the number if it is a 1-9 and an X if it is 10
	switch (d10) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9: printf("\nISBN-10: %d-%d%d-%d%d%d%d%d%d-%d", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10); break;
		case 10:printf("\nISBN-10: %d-%d%d-%d%d%d%d%d%d-X", d1, d2, d3, d4, d5, d6, d7, d8, d9);
	}

	return 0;
}

