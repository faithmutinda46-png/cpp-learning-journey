#include<iostream>
using namespace std;

int main(){
	// Declare a variable to store the user's choice.
	int number;

	 // Display the available fruits
	cout << "Choose a fruit:\n";
	cout << "1.Apple\n";
	cout << "2.Banana\n";
	cout << "3.Orange\n";

	// Ask the user to select a fruit.
	cout << "Enter your choice : ";
	cin >> number;
	
	// Use switch to display the fruit selected by the user.
	switch(number){
		case 1:
			cout << "You selected an Apple.";
			break;
			
		case 2:
		    cout << "You selcted a Banana.";
		    break;
		
		case 3:
			cout << "You selected an Orange.";
			break;
			
		default:
			cout << "Invalid choice.";
			
	}
	return 0;
}
