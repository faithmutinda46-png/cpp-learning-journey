#include<iostream>
using namespace std;

int main(){
	
	int number;
	int sum = 0;
	
	cout << "Enter a number : ";
	cin >> number;
	
	for(int i = 1; i <= number; i++){
		sum += i;
		
}
	
	cout << "The sum is : " << sum; 

	return 0;
}
