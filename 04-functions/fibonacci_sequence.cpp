#include<iostream>
using namespace std;

int fib(int number){
	
	if(number <=0){
		return 0;
	}
	if(number == 1){
		cout << 0 << " ";
		return 1;
	}
	int first = 0;
	int second = 1;
	int next;
	
	cout << first << " " << second << " ";
	
	for(int count = 2; count < number; count++){
	
	next = first + second;
	
	first = second;
	second = next;	
	
	cout << next << " ";


}
	return next;
}

int main(){
	int number = 0;
	cout << "Enter number of terms : ";
	cin >> number;
	
	cout <<"\nFinal fibonacci value returned : " << fib(number);
	return 0;
	
}
