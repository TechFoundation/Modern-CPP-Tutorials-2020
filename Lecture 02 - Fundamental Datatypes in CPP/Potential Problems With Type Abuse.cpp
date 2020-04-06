#include<iostream>

using namespace std;
/****************************************************
 *       Potential Issues with Datatype Abuse       *
 ****************************************************/
int main(){
	// Setting a numnber greater or smaller than the 
	// Limits of an integer datatype
	
	char option{};
	
	short accountBal{0};
	short deposit{};
	short withdraw{};
	
	while(true){
		system("cls");
		cout << "\tWelcome to TECHFoundation Int. Bank" << endl;
		cout << "\t===================================" << endl;
		cout << "\t D. DEPOSIT  ----------- <PRESS D>" << endl;
		cout << "\t W. Withdraw ----------- <PRESS W>" << endl;
		cout << "\t R. RESET     ---------- <PRESS R>" << endl;
		cout << "\t Q. QUIT     ----------- <PRESS Q>" << endl;
		cout << "\t===================================" << endl;
		cout << "\tAccount Balance: " << accountBal << endl;
		cout << "\t===================================" << endl;
		cout << "\tSelect: ";
		cin >> option;
		
		switch(option){
			case 'd': case 'D':
				cout << "\tYou want to make a deposit" << endl;
				cout << "\tEnter amount: ";
				cin >> deposit;
				cout << "\t"<< deposit << endl;
				cout << "\tPrevious Balance: " << accountBal << endl;
				
				accountBal = accountBal + deposit;
				cout << "\t==================================" << endl;
				cout << "\tAccount Balance: " << accountBal << endl;
				cout << "\t==================================\n\t";
				break;
			case 'w': case 'W':
				cout << "\tYou want to withdraw money" << endl;
				cout << "\tEnter amount: ";
				cin >> withdraw;
				cout << "\t" << withdraw << endl;
				cout << "\tPrevious Balance: " << accountBal << endl;
				
				accountBal = accountBal - withdraw;
				cout << "\t==================================" << endl;
				cout << "\tAccount Balance: " << accountBal << endl;
				cout << "\t==================================\n\t";
				break;
			case 'r': case 'R':
				cout << "\tReseting values!\n\t";
				accountBal = 0;
				deposit = 0;
				withdraw = 0;
				break;
			case 'q': case 'Q':
				cout << "\tThank you for doing business with us!\n\t";
				system("pause");
				exit(0);
			default:
				cout << "\t\aInvalid Option. Please try again!\n\t";
		}
		
		// Wait until user presses enter
		system("pause");
		
		// Reset variables
		deposit = 0;
		withdraw = 0;
	}
	
	return 0;	
}
