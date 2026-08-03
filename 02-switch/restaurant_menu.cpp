#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int choice;
	
	cout << "Customer welcome to Faith restaurant, this is our menu :\n";
	cout << "1.Fries\n";
	cout << "2.Pilau\n";
	cout << "3.Chicken kienyeji\n";
	cout << "4.Beef\n";
	cout << "5.Burger\n";
	cout << "6.Pizza\n";

    cout << "Enter your order : ";
    cin >> choice;
    
    switch(choice){
    	case 1:
    		cout << "Your choice is Fries. will be ready in 10 minutes. Thank you.";
    		break;
    	case 2:
    		cout << "Your choice is Pilau. will be ready in 15 minutes. Thank you.";
    		break;
    	case 3:
    		cout << "Your choice is Chicken kienyeji. will be ready in 15 minutes. Thank you";
    		break;
    	case 4:
    		cout << "Your choice is Beef. will be ready in 10 minutes. Thank you";
    		break;
    	case 5:
    		cout << "Your choice is Burger. will be ready in 5 minutes. Thank you";
    		break;
    	case 6:
    		cout << "Your choice is Pizza. will be ready in 5 minutes. Thank you";
    		break;
    	default:
    		cout << "Invalid choice";
    	
	}
	return 0;
}
