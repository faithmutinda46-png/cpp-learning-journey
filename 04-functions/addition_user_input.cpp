#include<iostream>
using namespace std;

int add(int firstNumber,int secondNumber){
	return firstNumber + secondNumber;
	
}
int main(){

int firstNumber = 0;
int secondNumber = 0;

cout << "Enter first number: ";
cin >> firstNumber;
cout << "Enter second number: ";
cin >> secondNumber;

cout <<"Sum of the numbers is : " << add(firstNumber,secondNumber);
return 0;
}

