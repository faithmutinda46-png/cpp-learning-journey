#include<iostream>
using namespace std;

//create a function that we can reuse.
int words(string sentence){
	int count = 0;
	
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
	getline(cin,sentence);
	
	cout << words(sentence);
	return 0;
}
