#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
	
	Use of Pointer
	
	Pointer - Dynamic Memory allocation using new() and delete()
*/

main (){
	cout << "Use of Pointers" << endl;
	cout << "---------------" << endl;
	
	int num1 = 5; // Variable declaration and initialization
	int *n; // Pointer declaration
	
	n = &num1; // Initializing num1 address into pointer
	
	cout << "The address of num1 is: " << n << " or " << &num1 << endl;
	cout << "The value of num1 is: " << *n << " or " << num1 << endl;

	cout << "\n-------------" << endl;		
	cout << "Dynamic MALLOC\n" << endl;
	
	int *ptr;
	ptr = new(int);
	
	cout << "Enter number: ";
	cin >> *ptr;
	cout << "You entered: " << *ptr << " saved in address: " << ptr << endl;
	
	return 0;
}