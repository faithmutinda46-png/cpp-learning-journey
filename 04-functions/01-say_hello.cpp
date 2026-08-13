#include<iostream>
#include<string>
using namespace std;

void sayHello(string name){
	cout << "Hello " << name << "!\n";
}
int main(){
	sayHello ("Faith");
	sayHello ("Jane");
	sayHello ("Pius");
	return 0;
}
