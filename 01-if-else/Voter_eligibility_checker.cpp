#include<iostream>
#include<string>
using namespace std;

int main(){
	int age;
	string name;
	
	cout << "Enter your name : ";
	cin >> name;
	
	cout << "Enter your age : ";
	cin >> age;
	
	if (age >= 18){
	cout << name << " You are eligible to vote!";
}else{
	cout << name << " You are not eligible to vote";
}
	return 0;
}