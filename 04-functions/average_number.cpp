#include<iostream>
using namespace std;

// Calculate the average of the 5 numbers in the array.
double calculateAverage(int numbers[5]){
	//declare a variable.
	int sum = 0;

	// Add all the numbers in the array.
	for(int i = 0; i < 5; i++){
    sum = sum + numbers[i];
}
	// Divide the total by 5 to get the average.
    double average = sum / 5.0;

// Return the calculated average.	
return average;
}
int main(){
	int numbers[5];
	// Ask the user to enter 5 numbers.
	cout << "Enter 5 numbers: \n";

	// Store the user's numbers in the array.
	for(int i = 0; i < 5; i++){	
    cin >> numbers[i];
}
// Display the average calculated by the function.
cout << calculateAverage(numbers);
return 0;
}
