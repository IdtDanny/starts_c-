#include<iostream>
using namespace std;

/* Kids Play - Alphabet Typing */

main () {
	char c = 'A';
	char kid;
	
	cout << "Game displays\t Kid Typing" << endl;
	
	do {
		cout << c << ":\t\t\t";
		cin >> kid;
		if (kid != c) {
			cout << "Wrong Input" <<endl;
			continue;
		}
		c++;
	} while (c <= 'Z');
	return 0;
}