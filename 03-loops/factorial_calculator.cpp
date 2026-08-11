#include<iostream>
using namespace std;

int main(){
	
	int number = 0;
	int result = 1;
	
	cout << "Enter a number : ";
	cin >> number;
	
	for(int i = 1; i <= number; i++){
		result *= i;
	
	}
	cout << result << endl;
	
	return 0;
}
