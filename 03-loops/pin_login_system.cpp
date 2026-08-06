#include<iostream>
#include<string>
using namespace std;

int main(){
	
	//Declare varriables
	
	int pin = 0;
	int correctPin = 1234;
	int attempts = 0;
	
	//while loops
	
	while(pin != correctPin && attempts < 3){
		cout << "Enter your pin : "; 
	    cin >> pin;
	    attempts++;
	    
	    
	    if(pin != correctPin){
	    	if(attempts < 3){
		
	    cout << "Wrong pin.Try again. You have " << 3 - attempts << " attempts remaining. \n";
	}
}
}
	if(pin == correctPin){
	
	cout << "Access granted. Welcome to FAITH Bank";
}else{
	cout << "Account locked!";
}
	return 0;
}
