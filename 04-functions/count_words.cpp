#include<iostream>
using namespace std;

int words(string sentence){
	int count = 0;
	
	for(int i = 0; i < sentence.length(); i++){
		
		if(sentence[i] == ' '){
			count++;
		}
	}
	return count+1;
	
}

int main(){
	string sentence;
	
	cout << "Enter a sentence : \n";
	getline(cin,sentence);
	
	cout << words(sentence);
	return 0;
}
