#include<iostream>
using namespace std;

int pali(int number){//reverse,lastDigit
    int reversed = 0;
    int lastDigit = 0;
    
	while(number != 0){
    lastDigit = number % 10;
    reversed = reversed * 10 + lastDigit;
    number = number / 10;
    
	}
  if(number == reversed){
  	cout << "Number is palidrome";
  }else{
  	cout << "Number is not palidrome";
  }
  return pali;
	
}
int main(){
	int number = 0;
	cout << "Enter a number to check if its palidrome or not : ";
	cin >> number;

	cout << pali(number);
	return 0;
	
}
