#include<iostream>
using namespace std;

//create a function that we can reuse.
int words(string sentence){
	int count = 0;

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
	
	cout << "Enter a sentence : \n";
	getline(cin,sentence);//use get line to get sentence input from the user
	
	cout << words(sentence);
	return 0;
}
