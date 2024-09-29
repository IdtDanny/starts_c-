#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
	
	Displaying DoB on the screen
*/
main() {
	string fname;
	int age, DoB;
	int year = 2024;
	
	cout << "Enter your name: ";
	getline(cin, fname); // cin >> fname;
	
	cout << endl << "Enter your age: ";
	cin >> age;
	           
	DoB = year - age;
	cout << endl << fname << " was born in " << DoB << endl;
	return 0;
}