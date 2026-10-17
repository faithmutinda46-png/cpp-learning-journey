#include<iostream>
using namespace std;

// Count the even and odd numbers in the array.
void count(int numbers[5], int &evenCount, int &oddCount){

    // Check each number in the array.
    for(int i = 0; i < 5; i++){
    // Count the number as even if it divides by 2 with no remainder.
    if(numbers[i] % 2 == 0){
    	evenCount++;
	}else{
		// Otherwise, count it as odd.
		oddCount++;
	}
}
 
}
int main(){
	int numbers[5];
	int evenCount = 0;
    int oddCount = 0;
	
	// Ask the user to enter 5 numbers.
	cout << "Enter 5 numbers: \n";
	
	for(int i = 0; i < 5; i++){	
    cin >> numbers[i];
}
count(numbers, evenCount, oddCount);

cout << "Even numbers: " << evenCount << "\n";
cout << "Odd numbers: " << oddCount << "\n";
return 0;
}
