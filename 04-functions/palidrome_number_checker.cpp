#include<iostream>
using namespace std;

int pali(int number){//reverse,lastDigit
    int reversed = 0;
    int lastDigit = 0;
    int originalNumber = number;
    
	while(number != 0){
    lastDigit = number % 10;
    reversed = reversed * 10 + lastDigit;
    number = number / 10;
    
	}
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
	
	pali(number);
	return 0;
}
