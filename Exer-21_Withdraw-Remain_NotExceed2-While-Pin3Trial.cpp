#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
	
	Sample ATM Machine Program - Deposit, withdraw and check balance upon PIN approval.
*/

main(){
	
	string fname = "John";
	
	string pin;
	
	int amount, withdrawAmount, depositAmount, totalBalance, remain, choice;
	
	int count = 0;
	
	amount = 50000;
	
	do {
		cout <<"Enter your PIN to proceed: ";
		cin >> pin;
		
		if (pin == "John") {
			
			cout << "Hello " << fname << "! \nProceed with: \n1. Withdraw \n2. Check balance \n3. Deposit" << endl;
			cin >> choice; 
			
			if (choice == 1) {
				cout << "\nHow much to withdraw: " << endl;
				cin >> withdrawAmount;
			
				remain = amount - withdrawAmount;
				
				if (remain >= 2000) {
					if (withdrawAmount > 0) {
						cout << "You've withdrawn: " << withdrawAmount << " Rwf" << endl;
						cout << "Remain Balance: " << remain << " Rwf" << endl;
					}
					else {
						cout << "Invalid Amount" << endl; 
					}
				}
				else {
					cout << "You can't remain balance 2000 Rwf" << endl;
				}
			}
			else if (choice == 2) {
				cout << "Your current balance: " << amount << " Rwf";
			}
			else if (choice == 3) {
				cout << "\nHow much to deposit: " << endl;
				cin >> depositAmount;
				
				if (depositAmount > 0) {
					totalBalance = depositAmount + amount;
					
					cout << "You've deposited: " << depositAmount << " Rwf" << endl;
					cout << "New Balance: " << totalBalance << " Rwf" << endl;
				}
				else {
					cout << "Invalid Amount" << endl;
				}
			}
			else {
				cout << "Invalid Choice!" << endl;	
			}
		}
		else{
			cout << "Wrong PIN! ";
		}
		
		cout << 2-count << " trial remain!" << endl << endl;
		count++;
		
	}while(count < 3);
	return 0;
}