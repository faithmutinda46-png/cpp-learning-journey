#include<iostream>
using namespace std;

int characters(string letters){
	int counter = 0;
	
	
	for(int i = 0; i < letters.length(); i++){
	counter++;
}
	return counter;
}
int main(){
	string letters;
	cout << "Write a sentence : ";
	getline(cin,letters);
	
	cout << characters(letters);
	return 0;
}
