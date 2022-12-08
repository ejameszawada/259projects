/* Course: CSCI 259, Section 2
 Student Name: Ethan Zawada
 Student ID: 10627257
 Program 1 Homework
 Due Date: 2/11/20
 In keeping with the Honor Code of UM, I have neither
 given nor received assistance from anyone other than the instructor.

 Program Description: This program calculates the height and diamter of a cone of gelato in feet from inches and 
 provides the weight of the gelato.
*/


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//declare variables
	double h;
	double d;
	//ask for user input on the height and diameter
	cout << "Enter the height of the gelato cone in inches: ";
	cin >> h;
	cout << "Enter the diamter of the top of the gelato in inches: ";
	cin >> d;
	//convert the height and diameter from inches to feet
	double hf = h / 12.0;
	double df = d / 12.0;
	//created a variable for pi and radius for ease of use
	double r = df / 2.0;
	double pi = 3.141592;
	//calculate volume of cone and hemisphere of gelato
	double Vc = pi * pow(r, 2.0) * hf / 3.0;
	double Vh = pi * pow(r, 3.0) * (2.0 / 3.0);
	//calculate the total volume
	double Vt = Vc + Vh;
	//caculate weight per 7.5 cubic feet by 8 lbs
	double w = Vt / 7.5 * 8.0;
	//extra line to make it look nicer
	cout << "\n";
	//print results
	cout << "A gelato cone of height " << hf << " feet and diameter ";
	cout << df <<  " feet can hold " << w << " lbs. of gelato.";
	//terminates program with 0
	return 0;
}

