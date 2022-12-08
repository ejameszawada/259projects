/* Course: CSCI 259, Section 2
 Student Name: Ethan Zawada
 Student ID: 10627257
 Program 4 (Homework)
 Due Date: 3/31/20
 In keeping with the Honor Code of UM, I have neither given nor received assistance from
anyone other than the instructor.
 Program Description: This program takes user input for a binary number and converts it to a decimal 
 value by breaking the string into separate characters and adding the newly formed decimal value.
*/

#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main() {

	string in;
	//ask for user input
	cout << "Enter a binary number: ";
	cin >> in;
	//declare variables
	int i = 0;
	int l = in.length();
	int dec = 0;

	//iterates through the binary number
	while (i < l) {
		//calculates the number and converts it to decimal
		if (in[i] == '0' || in[i] == '1') {

			dec += (in[i] - '0') * pow(2, l - i - 1);

		}
		//if the user inputs anything other than a 1 or 0
		else {
			
			cout << "Invalid binary number entered!" << endl;
			//so it only displays the one time instead of however many incorrect numbers
			exit(1);
		}
		i++;
	}
	//displays the newly calculated decimal value
	cout << "The corresponding decimal value is: " << dec << endl;

	return 0;

}