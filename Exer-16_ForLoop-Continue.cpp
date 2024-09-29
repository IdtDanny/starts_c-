#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
	
	use of Continue statement
*/

main(){
	int i;
	
	for (i = 1; i <= 10; i++) {
		if (i == 3 || i == 5 || i == 7)
			continue;
		cout << i << endl;
	}
	return 0;
}