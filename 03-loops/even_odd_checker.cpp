#include<iostream>
using namespace std;

int main(){

	//declare varriable
	int number = 0;

	//ask for user input
	cout << "Enter a number : ";
	cin >> number;

	//use if else statment to get the even and odd numbers
	if(number % 2 == 0){
		cout << "This is an Even number. ";
	}else{
		cout << "This is an Odd number. ";
	}
	return 0;
}
