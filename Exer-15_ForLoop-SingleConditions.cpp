#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny

	For only one Condition (relational conditions)
		1 x 5 = 5
		2 x 4 = 8
		3 x 3 = 9
		4 x 2 = 8
		5 x 1 = 5
	
	Use of break statement
	
	Use of continue statement
*/

main() {
	int i, j;
	for (i = 1, j = 5; i < 6; i++, j--) {
		cout << i << " x " << j << " = " << i*j << endl; 
	}
	
	cout << "\nUse of break: " << endl;
	
	for (i = 1; i < 6; i++) {
		cout << i << endl;
		if (i == 3) {
			break;
		}
	}
	
	cout << "\nUse of continue: " << endl;
	
	for (i = 1; i < 6; i++) {
		if (i == 3){
			continue;
		}
		cout << i << endl;
	}
	return 0;
}