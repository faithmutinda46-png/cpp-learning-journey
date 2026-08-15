#include<iostream>
using namespace std;

int addition(int firstNumber, int secondNumber){
	return firstNumber + secondNumber;
}
int subtraction(int firstNumber, int secondNumber){
	return firstNumber - secondNumber;
}
int multiplication(int firstNumber,int secondNumber){
	return firstNumber * secondNumber;
}
int division(int firstNumber , int secondNumber){
	return firstNumber / secondNumber;
}

int main(){
	int firstNumber = 0;
	int secondNumber = 0;
	int choice = 0;
	
	cout << "Enter first number : ";
	cin >> firstNumber;
	cout << "Enter second number : ";
	cin >> secondNumber;
	
	cout << "Choose an operation \n";
	cout << "1.Addition \n";
	cout << "2.Subtraction \n";
	cout << "3.Multiplication \n";
	cout << "4.Division \n\n";
	cout << "Enter your choice : \n";
	cin >> choice;

	
	while(choice != 1 && choice != 2 && choice != 3 && choice != 4){
		cout << "Invalid choice. Try again.\n";
		cin >> choice;
}
	
	if(choice == 1){
	cout << "Answer = " << addition(firstNumber , secondNumber);
    }else if(choice == 2){
	cout << "Answer = " << subtraction(firstNumber, secondNumber);
}else if(choice == 3){
	cout << "Answer = " << multiplication(firstNumber, secondNumber);
}else if(choice == 4 && secondNumber != 0){
	cout << "Answer = " << division(firstNumber, secondNumber);
}else if(choice == 4 && secondNumber == 0){
	cout << "Cannot divide by 0";
}
else{
	cout << "Invalid menu choice";
}
	return 0;
}
