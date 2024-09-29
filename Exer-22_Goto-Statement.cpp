#include<iostream>
using namespace std;

main () {
	int num1, num2;
	
	int n = 0;
	string name;
	
	char choice;
	
	while (n < 5) {
		cout << n << endl;
		if (n == 3)
			goto celebrate;
		n++;
	}
	celebrate:
		cout << endl << "BOOM! You made it!" << endl;
		cout << "State your first name: " << endl;
		cin >> name;
		cout << endl << name << " Welcome to C++ Programming Lecture!" << endl;
		
		cout << "Enter any two numbers to add them: " << endl;
		cin >> num1 >> num2; 
		cout << "Sum is " << num1 + num2;
		
	return 0;
}