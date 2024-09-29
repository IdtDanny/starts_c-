#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
	
	Adding numbers
	
	1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
*/

main () {
	int n = 1;
	int sum = 0;
	
	while (n <= 10) {		
		if  (n == 10)
			cout << n;
		else
			cout << n << " + ";
		
		sum += n;
		n++;	
	}
	cout << " = " << sum << endl;
	return 0;
}