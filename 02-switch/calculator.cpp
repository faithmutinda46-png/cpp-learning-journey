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
	
	switch(choice){
		case 1:
			cout << "Answer = " <<firstNum + secondNum;
			break;
		case 2:
			cout << "Answer = " <<firstNum - secondNum;
			break;
		case 3:
			cout << "Answer = " <<firstNum / secondNum;
			break;
		case 4:
			cout << "Answer = " <<firstNum * secondNum;
			break;
		default:
			cout << "Invalid choice";
	}
	return 0;
}
