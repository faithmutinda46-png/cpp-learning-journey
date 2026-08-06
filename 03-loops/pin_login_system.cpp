#include<iostream>
using namespace std;

int main(){
	
	int pin;
	int correctPin = 1234;
	
	
	while(pin != correctPin){
		cout << "Enter your pin : "; 
	    cin >> pin;
	    
	    if(pin != correctPin){
		
	    cout << "Wrong pin.Try again. \n";
	}else{
	
	cout << "Access granted. Welcome to FAITH Bank";
}
}
	return 0;
}
