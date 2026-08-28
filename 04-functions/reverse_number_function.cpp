#include<iostream>
using namespace std;

int reverseNumber(int wholeNumber){
	int reversed = 0;
	
	while(wholeNumber != 0){
	    int lastDigit = wholeNumber % 10 ;
		wholeNumber = wholeNumber / 10;
		reversed = reversed * 10 + lastDigit;
	}
	
	return reversed;

}


int main(){
	int wholeNumber = 0;
	
	cout << "Enter a Whole number : ";
	cin >> wholeNumber;
	
	cout << "Reversed number is : " << reverseNumber(wholeNumber);
	return 0;
}
