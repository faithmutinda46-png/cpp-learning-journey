#include<iostream>
#include<string>
using namespace std;

void introduce(string name,int age){
	cout << "Hello " << name << " ,You are " << age << " years old.";
	
}
int main(){
	introduce("Faith",25);
	return 0;
}
