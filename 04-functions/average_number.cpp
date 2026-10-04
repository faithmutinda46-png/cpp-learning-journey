#include<iostream>
using namespace std;

double calculateAverage(int numbers[5]){
	int sum = 0;
	
	for(int i = 0; i < 5; i++){
    sum = sum + numbers[i];
}
    double average = sum / 5.0;

return average;
}
int main(){
	int numbers[5];
	cout << "Enter 5 numbers: \n";
	
	for(int i = 0; i < 5; i++){
    cin >> numbers[i];
}
cout << calculateAverage(numbers);
return 0;
}
