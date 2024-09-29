#include<iostream>
using namespace std;

main() {
	int choice, seatReserve, seatCancel, s;
	
	cout << "Welcome to Railway Reservation System\n";
	cout << "-------------------------------------\n";
	cout << "Proceed with: \n1. Reserve a seat\n2. Cancel a reservation\n3. Display available seats\n4. Exit the program\n";
	cin >> choice;
	
	switch (choice){
		
		// Reserve a seat
		case 1:
			cout << "Seats Arrangement\n-----------------" << endl;

			cout << "2. First class 30$ \n3. First class 30$ \n5. Economy 20$ \n6. Economy 20$\n9. Economy 20$ \n10. Economy 20$ \n11. Economy 20$" << endl;
			
			cout << "\nEnter seat to reserve: \n";
			cin >> seatReserve;
			cout << endl;
			
			switch (seatReserve) {
				case 2:
					cout << "TICKET\n------" << endl;
					cout << "Seat: \t First Class \nSeat No: \t 2 \nAmount: \t 30$\n";
					break;
				case 3:
					cout << "TICKET\n------" << endl;
					cout << "Seat: \t First Class \nSeat No: \t 3 \nAmount: \t 30$\n";
					break;
				case 5:
					cout << "TICKET\n------" << endl;
					cout << "Seat: \t Economy \nSeat No: \t 5 \nAmount: \t 20$\n";
					break;
				case 6:
					cout << "TICKET\n------" << endl;
					cout << "Seat: \t Economy \nSeat No: \t 6 \nAmount: \t 20$\n";
					break;
				case 9:
					cout << "TICKET\n------" << endl;
					cout << "Seat: \t Economy \nSeat No: \t 9 \nAmount: \t 20$\n";
					break;
				case 10:
					cout << "TICKET\n------" << endl;
					cout << "Seat: \t Economy \nSeat No: \t 10 \nAmount: \t 20$\n";
					break;
				case 11:
					cout << "TICKET\n------" << endl;
					cout << "Seat: \t Economy \nSeat No: \t 11 \nAmount: \t 20$\n";
					break;
				default:
					cout << "Invalid Seat Number" << endl;
			}
			break;
		
		// Cancel a reservation
		case 2:
			cout << "Enter the seat number to cancel: \n";
			cin >> seatCancel;
			
			s = seatCancel;
			if (s == 4 || s == 8 || s == 7) {
				cout << "The Reservation was cancelled successful" << endl;
			}
			else if (s == 1 || s == 2 || s == 3 || s == 6 || s == 9 || s == 10 || s == 11) {
				cout << "Reservation was not made on that seat" << endl;
			}
			else {
				cout << "Invalid seat number" << endl;
			}
			
			break;
		
		// Display Seats available
		case 3:
			cout << "Seats Available\n---------------" << endl;
			cout << "1. Driver \n2. First class 30$ \n3. First class 30$ \n4. Not Available \n5. Economy 20$ \n6. Economy 20$\n7. Not Available ";
			cout << "\n8. Not Available \n9. Economy 20$ \n10. Economy 20$ \n11. Economy 20$ \n12. Train Manager" << endl;
			break;
		
		// Exit the program
		case 4: 
			exit;
			break;
		
		// Default Option
		default: 
			cout << "Invald Option" << endl;
	}
	
	return 0;
}