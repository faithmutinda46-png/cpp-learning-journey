#include<iostream>
using namespace std;

int main(){
	
	int number = 0;
	
	cout << "Enter a number : ";
	cin >> number;
	
	if(number % 2 == 0){
		cout << "This is an Even number. ";
	}else{
		cout << "This is an Odd number. ";
	}
	return 0;
}
