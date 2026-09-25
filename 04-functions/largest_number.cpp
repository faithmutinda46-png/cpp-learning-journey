#include<iostream>
using namespace std;

// Create a function to find the largest number in the array.
int findLargest(int numbers[5]){
	int largest = 0;

	//create for loop to check and store the largest number
	for(int i = 0; i < 5; i++){
	if(numbers[i] > largest){
		largest = numbers[i];
		
	}
}
//return the largest number
return largest;	
}
int main(){
	int numbers [5];
	
	//ask the user for their input	
	cout << "Enter numbers : \n";

// Use a for loop to get 5 numbers from the user and store them in the array.
	for(int i = 0; i < 5; i++){
		cin >>numbers[i];
	}
	
	cout <<"Largest number is : " << findLargest(numbers);
	return 0;
}
