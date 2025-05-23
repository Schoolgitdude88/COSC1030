//
// Robert Pilkington	
// 01/25/2025
// Fix the Errors #3 Programming Project
// COSC 1030
//

// This program takes two values from the user and then swaps them
// before printing the values. The user will be prompted to enter
// both numbers.

#include <iostream>
using namespace std;

int main()
{

	float firstNumber;
	float secondNumber;

	// Prompt user to enter the first number.
	cout << "Enter the first number" << endl;
	cout << "Then hit enter" << endl;
	cin >> firstNumber;

	// Prompt user to enter the second number.
	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin >> secondNumber;

	// Echo print the input.
	cout << endl << "You input the numbers as " << firstNumber
		<< " and " << secondNumber << endl;
	
	// this section prevents the firstNumber variable from being overwritten which was causing the logic error, probably not the most elegant way to fix it but it worked
	int number1;
	int number2;
	number1 = firstNumber;
	number2 = secondNumber;

	// Now we will swap the values.
	firstNumber = number2; secondNumber = number1;

	// Output the values.
	cout << "After swapping, the values of the two numbers are "
		<< firstNumber << " and " << secondNumber << endl; return 0;
}
