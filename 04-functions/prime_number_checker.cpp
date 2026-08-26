#include<iostream>
using namespace std;

bool isPrime(int number){
	if(number < 2){
		return false;
	}
	
	for(int i = 2; i < number; i++){
		if(number % i == 0 ){
			return false;
		}
	}
	return true;
}


int main(){
	int number = 0;
	
	cout << "Enter a number : ";
	cin >> number;
	
	if(isPrime(number)){
		cout << number << " is a prime number.";
	}else{
		cout << number << " is not a prime number.";
	}
	return 0;
}
