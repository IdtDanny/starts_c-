#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
	
	Finding a program of any 5 integers
	
	4 * 5 * 6 * 1 * 9
*/

main () {
	int n, num, prod;
	prod = 1;
	
	cout << "Enter any 5 integers: " << endl;
	
	for (n = 0; n < 5; n++) {
		cin >> num;
		prod *= num; 
		if (num == 0){
			break;
		}
	}
	cout << "Product of is " << prod << endl;
	return 0;
}