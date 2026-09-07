#include<iostream>
using namespace std;

int pali(int number){//reverse,lastDigit
    int reverse = 0;
    int lastDigit = 0;
    
	while(number != 0){
    lastDigit = number % 10;
    reverse = (reverse) + lastDigit;
    number = number / 10;
    
	}
  if(number == reverse){
  	cout << "Number is palidrome";
  }else{
  	cout << "Number is not palidrome";
  }
  return reverse;
	
}
int main(){
	int number = 0;
	cout << "Enter a number to check if its palidrome or not : ";
	cin >> number;
	
}
