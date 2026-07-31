#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string name;
	int marks;
	
	cout << "Please Enter your name : ";
	cin >> name;
	
	cout << "Please Enter your Marks : ";
	cin >> marks;
	
	if (marks < 0 || marks>100 ){
		cout << name << " , Invalid marks entered.";
	}else if(marks >= 80){
		cout << name << " , Your Grade is A.";
	}else if(marks >= 70){
		cout << name << " , Your Grade is B.";		
	}else if(marks >= 60){
		cout << name << " , Your Grade is C.";
	}else if(marks >= 50){
		cout << name << " , Your Grade is D.";
	}else{
		cout << name << " , Your Grade is F.";
	}
	return 0;
}
