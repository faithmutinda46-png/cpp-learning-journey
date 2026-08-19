#include<iostream>
using namespace std;

int findMaximum(int firstNumber, int secondNumber, int thirdNumber){
		if (firstNumber > secondNumber && firstNumber > thirdNumber){
	return firstNumber;
	}else if (secondNumber > firstNumber && secondNumber > thirdNumber){
	return secondNumber;
	}else{
		return thirdNumber;
	}
}

int main(){
	
	int firstNumber = 0;
	int secondNumber = 0;
	int thirdNumber = 0;
	
	cout << "Enter first number : ";
	cin >> firstNumber;
	cout << "Enter second number : ";
	cin >> secondNumber;
	cout << "Enter third number : ";
	cin >> thirdNumber;
	
	cout <<" The largest number is : " << findMaximum(firstNumber, secondNumber, thirdNumber);
		
	return 0;
}
