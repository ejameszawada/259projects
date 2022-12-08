/* Course: CSCI 259, Section 2
 Student Name: Ethan Zawada
 Student ID: 10627257
 Lab 2 in class
 Due Date: 2/25/20
 In keeping with the Honor Code of UM, I have neither
 given nor received assistance from anyone other than the instructor.

 Program Description: This program takes 3 user inputs within a certain range each
 and compares those inputs to randomized numbers. Depending on if the two match
 the user wins.
*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//randomize numbers
	srand(time(0));
	int lot1 = 1 + (rand()%10);
	int lot2 = 11 + (rand()%10);
	int lot3 = 21 + (rand()%10);
	cout << lot1 << lot2 << lot3 << endl;
	int num1, num2, num3;
	//ask for user input and get it
	cout << "Enter your first lottery number between 1 and 10: ";
	cin >> num1;
	cout << "Enter your second lottery number between 11 and 20: ";
	cin >> num2;
	cout << "Enter your third lottery number between 21 and 30: ";
	cin >> num3;
	//if any of the numbers are out of the range it prints this
	if (num1 < 1 || num1 > 10 || num2 < 11 || num2 > 20 || num3 < 21 || num3 > 30) {
		cout << "\nYour numbers are not in the correct range!";
	}
	//if all three match
	else if (num1 == lot1 && num2 == lot2 && num3 == lot3) {
	cout << "\nYour lottery numbers were " << lot1 << ", " << lot2 << ", " << lot3;
	cout << "\nYour won $1000!";
	}
	//if one or two match
	else if (num1 == lot1 || num2 == lot2 || num3 == lot3) {
	cout << "\nYour lottery numbers were " << lot1 << ", " << lot2 << ", " << lot3;
	cout << "\nYou won $100!";
	}
	//if none match
	else {
		cout << "\nYour lottery numbers were " << lot1 << ", " << lot2 << ", " << lot3;
		cout << "\nSorry, you did not win anything.";
	}

	cout << "\n";

	return 0;

}

