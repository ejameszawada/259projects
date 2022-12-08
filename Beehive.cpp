/* Course: CSCI 259, Section 2
 Student Name: Ethan Zawada
 Student ID: 10627257
 Lab 1 in class
 Due Date: 2/4/20
 In keeping with the Honor Code of the School of Engineering, I have neither
 given nor received assistance from anyone other than the instructor.

 Program Description: This program will take user input for how many cells of a honeycomb they would like as well as how big
 each cell is in inches and will find the Volume of the cells while converting the inches to centimeters.
*/
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	//declare variables
	int n;
	double s;
	int h = 1;
	//ask for user input for the cells
	cout << "Enter the number of cells in the honeycomb: ";
	cin >> n;
	//ask for user input for the length of each cell
	cout << "Enter the length of one side of each honeycomb (in inches): ";
	cin >> s;
	//convert the inches to centimeters for easier use
	double inch = s * 2.54;
	//calculate volume
	double V = n * (3 * sqrt(3) / 2) * pow(inch, 2) * h;
	//extra line to make it look nice
	cout << "\n";
	//output data
	cout << "A honeycomb of " << n << " cells will produce " <<  V << " cubic cm of honey.";


}
