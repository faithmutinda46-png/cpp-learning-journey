#include<iostream>
using namespace std;

// This function generates the Fibonacci sequence based on the number of terms entered by the user.

int fib(int number){
	// If the user asks for only one term,the first fibonacci number is 0.
	if(number <=0){
		return 0;
	}
	if(number == 1){
		cout << 0 << " ";
		return 1;
	}

	//The fibonacci sequence starts with 0 then 1.
	int first = 0;
	int second = 1;
	int next;
	
	//Display the first two terms before starting the loop.
	cout << first << " " << second << " ";

	// Start from the third term because the first two terms have already been displayed.
	for(int count = 2; count < number; count++){

	// Add the previous two numbers to get the next term.
	next = first + second;

	// Move the values forward so they can be used to calculate the next Fibonacci number.	
	first = second;
	second = next;	

	// Display the new Fibonacci number.
	cout << next << " ";


}
	// Return the last Fibonacci number calculated.
	return next;
}

int main(){
	int number = 0;

	// Ask the user how many Fibonacci terms they want.
	cout << "Enter number of terms : ";
	cin >> number;

	// Call the Fibonacci function.
	cout <<"\nFinal fibonacci value returned : " << fib(number);
	return 0;
	
}
