#include<iostream>
using namespace std;

main() {
	try{
		string pin;
		string errorPin = "Wrong Pin";
		string errorChoice = "Wrong Choice";
		
		int choice, deposit, withdraw, floatBalance;
		
		floatBalance = 100000;
		
		cout << "Enter the Pin to continue: ";
		cin >> pin;
		
		if (pin == "apple123") {
			cout << "Welcome: " << endl;
			cout << "1. Deposit \n2. Withdraw \n3. Check your balance" << endl;
			cin >> choice;
			
			switch (choice) {
				case 1:
					cout << "How much: ";
					cin >> deposit;
					cout << "Your new balance: " << deposit + floatBalance << endl;
					break;
				case 2:
					cout << "How much: ";
					cin >> withdraw;
					cout << "Your new balance: " << floatBalance - withdraw << endl;
					break;
				case 3:
					cout << "Your balance: " << floatBalance << endl;
					break;
				default: 
					throw(errorChoice);
					break;
			}
		}
		else{
			throw(errorPin);
		}
	}
	
	catch(string thrownError) {
		cout << thrownError << endl;
	}
	
	return 0;
}