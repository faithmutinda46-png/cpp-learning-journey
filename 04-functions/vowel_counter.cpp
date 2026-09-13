#include<iostream>
#include<string>
using namespace std;

int numberOfVowels(string vowel){
	int count = 0;
	
	for(int i = 0; i < vowel.length(); i++){
		if(vowel[i] == 'a' || vowel[i] == 'e' || vowel[i] == 'i' || vowel[i] == 'o' || vowel[i] == 'u' ){
			count++;
		}
	}
	return count;
}
int main(){
	string vowel;
	
	cout << "Enter a word and get to know the number of vowels in the word : ";
	cin >> vowel;
	
	cout << numberOfVowels(vowel);
	return 0;
}
