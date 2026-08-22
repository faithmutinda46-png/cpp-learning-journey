#include<iostream>
using namespace std;

bool result(int number){
	return number % 2 == 0;
	
}


int main(){
	
	int number = 0;
	
	cout << "Enter a number : ";
	cin >> number;
	
		if(result(number)){
	cout << number << " This is an Even number.";	
	}else{
		cout << number << " This is an Odd number.";
	}
	return 0;
}
