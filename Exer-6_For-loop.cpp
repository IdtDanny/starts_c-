#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny

	Half pyramid using for loop
*/

main(){
	int a, b;
	for (a=0; a<10 ; a++) {
		for (b=0; b<a; b++) {	
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}