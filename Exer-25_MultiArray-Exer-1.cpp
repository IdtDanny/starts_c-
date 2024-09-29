#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
	
	Multidimensional array
*/

main(){
	
	int table[2][3][2];
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 2; k++) {
				cin >> table[i][j][k];
			}
		}
	}
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 2; k++){
				cout << table[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	
	return 0;
}