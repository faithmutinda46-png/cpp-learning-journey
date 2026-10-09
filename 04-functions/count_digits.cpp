#include<iostream>
using namespace std;

//create a function
int countDigit(int number){
	
	int count = 0;	
	if(number == 0){
		return 1;
	}
	
	while(number != 0){
		number = number / 10;
        count++;
		}
		return count;
}

int main(){
	
	int number = 0;
	//ask and get user input
	cout << "Enter a whole number : ";
	cin >> number;

	//print the output
	cout << "The number of digits is : " << countDigit(number);
	return 0;
}

