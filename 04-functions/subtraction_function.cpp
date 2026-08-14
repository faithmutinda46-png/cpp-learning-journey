#include<iostream>
using namespace std;

int subtract(int firstNumber, int secondNumber){
	return firstNumber - secondNumber;
}

int main(){
	
	int firstNumber = 0;
	int secondNumber = 0;
	
	cout << "Enter first number : ";
	cin >> firstNumber;
	cout << "Enter second number : ";
	cin >> secondNumber;
	
	cout << "The result is : " << subtract(firstNumber,secondNumber);
	return 0;
}
