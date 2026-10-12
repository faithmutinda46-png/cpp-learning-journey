#include<iostream>
using namespace std;

int main(){

	//declare varriables
	int number = 0;
	int result = 1;

	//Get user input
	cout << "Enter a number : ";
	cin >> number;
	
	for(int i = 1; i <= number; i++){
		result *= i;
	
	}
	//print the output
	cout << result << endl;
	
	return 0;
}
