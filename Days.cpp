/* Course: CSCI 259, Section 2
 Student Name: Ethan Zawada
 Student ID: 10627257
 Program 3 Homework
 Due Date: 3/3/20
 In keeping with the Honor Code of UM, I have neither
 given nor received assistance from anyone other than the instructor.

 Program Description: This program asks the user to enter a number 1-12 for each month respectively. Then the program will output 
 how many days are in that month and if the user inputs 2 for February they must enter a year to check it will be a leap year.
*/

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int month;
	int year;
	//get user input
	cout << "Enter a month (enter 1 for Jan, 2 for Feb, etc.): ";
	cin >> month;
	//if statement checks to see if the user inputs a proper number
	if (month > 0 && month <= 12) {
		//switch statement to display the number of days for each month
		switch (month) {
		case 1: cout << "Days in January: 31"; break;
		//ask for a year to check for leap year
		case 2: cout << "Enter a year : ";
			cin >> year;
			//if statement to chekc if it is a proper leap year
			if (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0)) {
				cout << "Days in February " << year << ": 29";
			}
			//if not a leap year
			else
				cout << "Days in February " << year << ": 28";
			break;
		case 3: cout << "Days in March: 31"; break;
		case 4: cout << "Days in April: 30"; break;
		case 5: cout << "Days in May: 31"; break;
		case 6: cout << "Days in June: 30"; break;
		case 7: cout << "Days in July: 31"; break;
		case 8: cout << "Days in August: 31"; break;
		case 9: cout << "Days in September: 30"; break;
		case 10: cout << "Days in October: 31"; break;
		case 11: cout << "Days in November: 30"; break;
		case 12: cout << "Days in December: 31"; break;

		}
	}
	//prints this message if invalid number for a month
	else
		cout << "Invalid month entered!";

	return 0;
}

