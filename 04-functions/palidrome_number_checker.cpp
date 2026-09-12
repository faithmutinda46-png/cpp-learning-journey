#include<iostream>
using namespace std;

//Reverse the number and compare it with the original number and check  whether its a palindrome.
int pali(int number){//reverse,lastDigit
    int reversed = 0;
    int lastDigit = 0;

	//Keep a copy of the original number because number will change inside the loop.
    int originalNumber = number;

	//Extract each digit and use it to bulid the reversed number
	while(number != 0){
    lastDigit = number % 10;
    reversed = reversed * 10 + lastDigit;
    number = number / 10;
    
	}
  // If the original and reversed numbers are the same, the number is a palindrome.
  if(originalNumber == reversed){
  	cout << "Number is palidrome";
  }else{
  	cout << "Number is not palidrome";
  }
  return reversed;
	
}
int main(){
	int number = 0;
	cout << "Enter a number to check if its palidrome or not : ";
	cin >> number;
	
	pali(number);//call the function and not print using cout
	return 0;
}
