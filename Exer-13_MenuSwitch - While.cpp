#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
	
	Providing a bill according to menu selected by the user using switch()
	
	do while() to iterate the menu until he stops placing order
*/

main() {
	int choice, size, qty, bill;
	
	string sFood = "";
	
	bill = 0;
	
	string repeat;
	
	cout << "Choice\t Food\t\t Big\t Medium\n";
	cout << "1\t Chips\t\t 2000\t 1000\n";
	cout << "2\t Rice\t\t 7500\t 3500\n";
	cout << "3\t Matooke\t 8000\t 4500\n";
	cout << "---------------------------------------" << endl;
	
	do {
	
		cout <<"Enter your choice of Food: " << endl;
		cin >> choice;
		cout << endl;
		
		switch (choice) {
			
			// For chips
			case 1:
				sFood += "Chips. ";
				cout << "Which size would you like?\n1. Big Plate\n2. Medium Plate\n";
				cin >> size;
				
				// Big Size Plate
				if (size == 1){
					cout << "How many plates?\n";
					cin >>qty;
										
					cout << "\nRECEIPT\n-------\n";
					cout << "Food:\t "<< sFood <<" \nSize:\t ";
					cout << "Big Plate\nQty:\t " << qty << "\nAmount:\t 2000 Rwf\nTotal:\t "<< 2000 * qty << " Rwf\nBilled:\t " << bill << " Rwf"<< endl;
					bill += 2000 * qty;
					cout << "GTotal:\t " << bill << " Rwf" << endl;
				}
				
				// Medium size plate
				else if (size == 2) {
					cout << "How many plates?\n";
					cin >>qty;
					
					cout << "\nRECEIPT\n-------\n";
					cout << "Food:\t "<< sFood <<" \nSize:\t ";
					cout << "Medium Plate\nQty:\t " << qty << "\nAmount:\t 1000 Rwf\nTotal:\t "<< 1000 * qty << " Rwf\nBilled:\t " << bill << " Rwf" << endl;
					bill += 1000 * qty;
					cout << "GTotal:\t " << bill << " Rwf" << endl;
				}
				
				// No size selected
				else {
					cout << "Invalid Size Choice!" << endl;
				}
				break;
				
			// For rice
			case 2:
				sFood += "Rice. ";
				cout << "Which size would you like?\n1. Big Plate\n2. Medium Plate\n";
				cin >> size;
				
				// Big Size Plate
				if (size == 1){
					cout << "How many plates?\n";
					cin >>qty;
					
					cout << "\nRECEIPT\n-------\n";
					cout << "Food:\t "<< sFood <<" \nSize:\t ";
					cout << "Big Plate\nQty:\t " << qty << "\nAmount:\t 7500 Rwf\nTotal:\t "<< 7500 * qty << " Rwf\nBilled:\t " << bill << " Rwf" << endl;
					bill += 7500 * qty;
					cout << "GTotal:\t " << bill << " Rwf" << endl;
				}
				
				// Medium size plate
				else if (size == 2) {
					cout << "How many plates?\n";
					cin >>qty;
					
					cout << "\nRECEIPT\n-------\n";
					cout << "Food:\t "<< sFood <<" \nSize:\t ";
					cout << "Medium Plate\nQty:\t " << qty << "\nAmount:\t 3500 Rwf\nTotal:\t "<< 3500 * qty << " Rwf\nBilled:\t " << bill << " Rwf" << endl;
					bill += 3500 * qty;
					cout << "GTotal:\t " << bill << " Rwf" << endl;
				}
				
				// No size selected
				else {
					cout << "Invalid Size Choice!" << endl;
				}
				break;
				
			// For Matooke
			case 3:
				sFood += "Matooke. ";
				cout << "Which size would you like?\n1. Big Plate\n2. Medium Plate\n";
				cin >> size;
				
				// Big Size Plate
				if (size == 1){
					cout << "How many plates?\n";
					cin >>qty;
					
					cout << "\nRECEIPT\n-------\n";
					cout << "Food:\t "<< sFood <<" \nSize:\t ";
					cout << "Big Plate\nQty:\t " << qty << "\nAmount:\t 8000 Rwf\nTotal:\t "<< 8000 * qty << " Rwf\nBilled:\t " << bill << " Rwf" << endl;
					bill += 8000 * qty;
					cout << "GTotal:\t " << bill << " Rwf" << endl;
				}
				
				// Medium size plate
				else if (size == 2) {
					cout << "How many plates?\n";
					cin >>qty;
					
					cout << "\nRECEIPT\n-------\n";
					cout << "Food:\t "<< sFood <<" \nSize:\t ";
					cout << "Medium Plate\nQty:\t " << qty << "\nAmount:\t 4500 Rwf\nTotal:\t "<< 4500 * qty << " Rwf\nBilled:\t " << bill << " Rwf" << endl;
					bill += 4500 * qty;
					cout << "GTotal:\t " << bill << " Rwf" << endl;
				}
				
				// No size selected
				else {
					cout << "Invalid Size Choice!" << endl;
				}
				break;
			
			// For no food choice
			default:
				cout << "Invalid Food Option" << endl;
				break;
		}
		cout << "\nDo you want something else from the menu?\nYes (1) / No (0):\n";
		cin >> repeat;
	}while(repeat == "Yes" || repeat == "1");
	return 0;
}