/* Course: CSCI 259, Section 2
 Student Name: Ethan Zawada
 Student ID: 10627257
 Lab 5 in class
 Due Date: 4/14/20
 In keeping with the Honor Code of UM, I have neither
 given nor received assistance from anyone other than the instructor.

 Program Description: This program prompts the user to enter the current year and month
 and their birth year and month and calculates the users age through this.
*/

#include <iostream>
#include <tuple>
using namespace std;
//method created to calculate year
int calYear(int curyear, int biryear, int curmonth, int birmonth) {
	if (curmonth < birmonth)
		return(curyear - 1) - biryear;
	if (curmonth >= birmonth)
		return curyear - biryear;

}
//method created to calculate month
int calMonth(int curmonth, int birmonth) {
	if (curmonth >= birmonth)
		return curmonth - birmonth;
	else
		return curmonth + (12 - birmonth);
}
int main()
{
	//ask for user input
	int curyear, curmonth, biryear, birmonth, year, month;
	cout << "Enter today's 4 digit year: ";
	cin >> curyear;
	cout << "Enter today's current month: ";
	cin >> curmonth;
	cout << "Enter the 4 digit year of your birth: ";
	cin >> biryear;
	cout << "Enter the month of your birth: ";
	cin >> birmonth;
	//call the methods
	year = calYear(curyear, biryear, curmonth, birmonth);
	month = calMonth(curmonth, birmonth);
	//print age
	printf("You are %d years and %d years old.", year, month);

	return 0;
}


