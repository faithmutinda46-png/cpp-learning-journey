#include<iostream>
#include<string>
using namespace std;

// Counts the number of vowels in a word.
int numberOfVowels(string vowel){
	int count = 0;//count varriable

	// Check each character in the word.
	for(int i = 0; i < vowel.length(); i++){

		// Increase count if the character is a vowel.
		if(vowel[i] == 'a' || vowel[i] == 'e' || vowel[i] == 'i' || vowel[i] == 'o' || vowel[i] == 'u' ){
			count++;
		}
	}
	return count;
}
int main(){
	string vowel;

	//ask the user for the input
	cout << "Enter a word and get to know the number of vowels in the word : ";
	cin >> vowel;

	//show output 
	cout << numberOfVowels(vowel);
	return 0;
}
