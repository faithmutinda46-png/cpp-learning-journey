#include<iostream>
using namespace std;

int main(){
	
	int seceretNumber = 13;
	int number = 0;
	
	while(number != seceretNumber){
			cout << "Guess any number between 1-100 : ";
	        cin >> number;
	 
			if(number>100 || number<1){
			cout << "Invalid coice. \n";
	}else if (number != seceretNumber){
		cout << "Wrong guess. Try again. \n";
	}
}
	   cout << " Congratulations You guessed right! " << " " << number << " is the correct number.";
	
	return 0;
}