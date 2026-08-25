#include<iostream>
using namespace std;

int factorial(int number ,int result){
	
		for(int i = 1; i <= number; i++){

	result *= i;
}
return result;
}


int main(){
	int number = 0;
	int result = 1;
	
	cout << "Enter a number : ";
	cin >> number;

	cout << factorial(number , result) << "\n";
	return 0;
}
