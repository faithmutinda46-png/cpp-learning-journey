#include<iostream>
using namespace std;

int findLargest(int numbers[5]){
	int largest = 0;
	
	for(int i = 0; i < 5; i++){
	if(numbers[i] > largest){
		largest = numbers[i];
		
	}
}
	
return largest;	
}
int main(){
	int numbers [5];
	
		
	cout << "Enter numbers : \n";
	
	for(int i = 0; i < 5; i++){
		cin >>numbers[i];
	}
	
	cout <<"Largest number is : " << findLargest(numbers);
	return 0;
}
