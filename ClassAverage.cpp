/* Course: CSCI 259, Section 2
 Student Name: Ethan Zawada
 Student ID: 10627257
 Program 5 (Homework)
 Due Date: 4/21/20
In keeping with the Honor Code of UM, I have neither given nor received assistance from
 anyone other than the instructor.
Program Description: This program takes user input for a certain amount of grades to input and that is set as the size of the array created and user then inputs
the values of each grade for each index of the array. The program then calculates the average and gives a letter grade.
*/

#include <iostream>
using namespace std;
//method to calculate average



void printMessage(string& message, int n) {
	message = message + " Hotty Toddy!";
	while (n > 0) {
		cout << message << endl;
		n--;
	}
}

int main() {
	int printNum = 2;
	string myMessage = "Go Rebels";
	printMessage(myMessage, printNum * 2);
	cout << myMessage << endl;
}

