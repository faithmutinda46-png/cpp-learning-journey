#include<iostream>
using namespace std;

//create a function that we can reuse.
int words(string sentence){
	int count = 0;//count varriable

	//use for loop to count and store the number of words in a sentence
	for(int i = 0; i < sentence.length(); i++){

		// Count the spaces between words.
		if(sentence[i] == ' '){
			count++;
		}
	}

	// Add 1 because the last word doesn't have a space after it.
	return count+1;
	
}

int main(){
	string sentence;

	//ask the user to enter output and use getline to count the number of words entered
	cout << "Enter a sentence : \n";
	getline(cin,sentence);
	
	//print the output
	cout << words(sentence);
	return 0;
}
