#include<iostream>
using namespace std;

//count all characters in a sentence
int characters(string letters){
	int counter = 0;
	
	//use for loop to loop through each character in the string
	for(int i = 0; i < letters.length(); i++){
	counter++;
}
	return counter;
}
int main(){
	string letters;

	// Get the whole sentence from the user.
	cout << "Write a sentence : ";
	getline(cin,letters);
	
	cout << characters(letters);
	return 0;
}
