/* Course: CSCI 259, Section 2
 Student Name: Ethan Zawada
 Student ID: 10627257
 Lab 4 in class
 Due Date: 3/24/20
 In keeping with the Honor Code of UM, I have neither
 given nor received assistance from anyone other than the instructor.

 Program Description: This program takes input from the user for a certain amount of money,
 years, and an interest rate and iterates through a loop how much it would cost per month and total
 of the interest rate the user entered to plus 3 of that by increments of .125.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double P, L, r, m, y;
	//get user input for each respective step
	cout << "Enter the loan amount: ";
	cin >> L;
	cout << "Enter number of years: ";
	cin >> y;
	cout << "Enter beginning interest rate (e.g. enter 5.1 for 5.1%): ";
	cin >> r;
	//months
	m = y * 12;

	double R = r + 3.0;

	cout << "Interest Rate \tMonthly Payment \tTotal Payment\n";

	//loop through the amount of interest rates and calculates the new payments
	while (r <= R) {
		//calculate monthly payment
		P = (L * r / 12) / (1 - (pow(1 + ((r/100) / 12), -m)));
		//calculate total payment
		double T = y * P * 12.0;
		printf("\t%.3f%%\t\t$%.2f\t\t$%.2f\n", r, P/100, T/100);
		r += .125;
	}
	
	return 0;
}