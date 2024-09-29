#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
	
	Air ticketing reservation form
	For:	class A - 1750.00
			class B - 1500.00
			class C (Economy) - 750.00
*/

class Passenger{
	public: 
		string first_name, last_name;
		char cls;
		int tickets, price, correctInput, w, choice;
		
		// Print a welcome message for the user
		int printWelcome () {
			cout << endl << "==================================" << endl;
			cout << "Welcome to Air Ticket Reservation" << endl;
			cout << "==================================" << endl;
			cout << "Enter 1 to proceed or 0 to exit: ";
			cin >> w;
			
			return w;
				
		}
		
		// Reserve a ticket according to which class user wants
		void reserveTicket(int tno) {
			cout << "\nReserve ticket No " << tno + 1 << endl;
			cout << "=====================" << endl;
			cout << "First name: ";
			cin >> first_name;
			
			cout << "Last name: ";
			cin >> last_name;
			
			cout << "Which class:\n A - 1750.00 per head\n B - 1500.00 per head\n C(ECONOMY) - 750 per head\n";
			cin >> cls;
			
			correctInput = 1;
			
			if (cls == 'A') {
				cout << "How many: ";
				cin >> tickets;
				if (tickets > 0)
					price = 1750.00;
				else
					cout << "Wrong Number! Start again" << endl << endl;
			}
			
			else if (cls == 'B') {
				cout << "How many: ";
				cin >> tickets;
				if (tickets > 0)
					price = 1500.00;
				else
					cout << "Wrong Number! Start again" << endl << endl;
			}
			
			else if (cls == 'C') {
				cout << "How many: ";
				cin >> tickets;
				if (tickets > 0)
					price = 750.00;
				else
					cout << "Wrong Number! Start again" << endl << endl;
			}
			else {
				correctInput = 0;
				cout << "Wrong Class! Start again" << endl << endl;
			}
		}
		
		// Calculate the total amount to pay
		double calcTot (double p, int t) {
			return p * t;
		}
		
		// Display the ticket details to the screen
		void displayTicket (int tno) {
			cout << endl << "Ticket details: " << endl;
			cout << "==============" << endl;
			cout << "Ticket No: " << tno + 1 << endl;
			cout << "Names: " << first_name + " " + last_name << endl;
			cout << "Class: " << cls << endl;
			cout << "Price: " << price << endl;
			cout << "Total: " << calcTot(price, tickets) << endl;
		}
		
		// Check if the user wish to view the reserved tickets
		int promptView () {
			cout << "Confirm if you want to view reserved tickets:\n Yes(1) or No(0)\n";
			cin >> choice;
			
			return choice;
		}
};

main () {
	int num, tno, cno, choice;
	
	tno = 0;
	
	cout << "How many Flight Place: ";
	cin >> num;
	
	Passenger P[num];
	
	cno = P[tno].printWelcome();
	
	for (int i = 0; i < num; i++) {
		tno = i;
			
		if (cno == 1) {
			P[i].reserveTicket(tno);
			
			if (P[i].correctInput == 1) {
				P[i].displayTicket(tno);
				
				if ((i+1) == num)
					cout << endl << num << " passenger on-board! Flight is full." << endl;
					
				else
					cno = P[i].printWelcome();
			}
		}
	}
	
	cout << endl;
	
	// Displaying the reserved tickets
	choice = P[0].promptView();
	
	if (choice == 1) {
		
		int x = 0;
			
		while (x < num) {
			cout << "Ticket No: " << x + 1 << " | Name: " << P[x].first_name << " | Class: " << P[x].cls << endl;
			x++;
		}
	}
	else {
		exit;
	}
	
	return 0;
}