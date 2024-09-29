#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
	
	Nested for loop
	
	Displaying this pattern using for loop:
		00 01 02 03 04
		10 11 12 13 14
		20 21 22 23 24
*/

main () {
	int i, j;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			cout << i << j << " ";
		}
		cout << endl;
	}
	
	cout << endl << "More example on Nested for Loop: " << endl;
	
	for (i = 1; i <= 2; i++) {
		for (j = 1; j <= 3; j++) {
			cout << j << " * " << i << " = " << j*i << endl;
		}
		cout << "---------" << endl;
	}
	
	return 0;
}