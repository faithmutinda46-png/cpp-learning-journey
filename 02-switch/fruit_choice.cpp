#include<iostream>
using namespace std;

int main(){
	int number;
	
	cout << "Choose a fruit:\n";
	cout << "1.Apple\n";
	cout << "2.Banana\n";
	cout << "3.Orange\n";
	
	cout << "Enter your choice : ";
	cin >> number;
	
	
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
