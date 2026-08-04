#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int choice;
	int balance = 210000;
	int deposit;
	int withdraw;
	int accNo;
	int transfer;
	
	cout << "Welcome to FAITH Bank ,Below is the menu:\n";
	cout << "1.Check balance\n";
	cout << "2.Deposit money\n";
	cout << "3.Withdraw money\n";
	cout << "4.Transfer money\n";
	cout << "5.Exit\n";
	cout << "Enter your choice : ";
	cin >> choice;
	
	switch (choice){
	case 1:
	cout << "Your balance is ksh " << balance;
	break;
	
    case 2:
	cout << "Enter the amount to deposit : ";
	cin >> deposit;
	cout << "Successfully deposited ksh " << deposit <<"\n";
	balance = balance + deposit;
	cout << "Your new balance : " << balance;
	break;
	
	case 3:
	cout << "Enter amount to withdraw : ";
	cin >> withdraw;
	cout << "Successfully withdrawn ksh " << withdraw << "\n";
	balance = balance - withdraw;
	cout << "Your new balance is " << balance;
	break;
	
	case 4:
	cout << "Enter account number : ";
	cin >> accNo;
	cout << "Enter amount to transfer : ";
	cin >> transfer;
	cout << "Successfull transfer of ksh " << transfer;
	break;
	
	case 5:
		cout << "Thank you for banking with FAITH Bank. Goodbye!";
		break;
	
	default:
		cout << "Invalid choice";
	
}
	
return 0;	
	
}
