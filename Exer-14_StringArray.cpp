#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
	
	Writing and Reading array of string type values
*/

main () {
	string names[3];
	cout << "Enter names: " << endl;
	for (int n=0; n<3; n++){
		cin >> names[n];
	}
	for (int n=0; n<3; n++) {
		cout << names[n];
		cout << endl;
	}
	return 0;
}