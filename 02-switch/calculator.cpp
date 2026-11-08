#include<iostream>
using namespace std;

int main(){
	
	// Declare variables to store the user's choice and two numbers.
	int choice;
	int firstNum;
	int secondNum;

	// Display the available mathematical operations.
	cout << "1.Addition\n";
	cout << "2.Subtraction\n";
	cout << "3.Division\n";
	cout << "4.Multiplication\n";

	// Ask the user to select an operation.
	cout << "Choose an operation : ";
	cin >> choice;

	// Ask the user to enter two numbers.
	cout << "Enter the First number : ";
	cin >> firstNum;
	
	cout << "Enter the second number : ";
	cin >> secondNum;

	// Use switch to perform the operation selected by the user.
	switch(choice){
		case 1:
			// Add the two numbers.
			cout << "Answer = " <<firstNum + secondNum;
			break;
		case 2:
			// Subtract the second number from the first.
			cout << "Answer = " <<firstNum - secondNum;
			break;
		case 3:
			// Divide the first number by the second.
			cout << "Answer = " <<firstNum / secondNum;
			break;
		case 4:
			// Multiply the two numbers.
			cout << "Answer = " <<firstNum * secondNum;
			break;
		default:
			cout << "Invalid choice";
	}
	return 0;
}
