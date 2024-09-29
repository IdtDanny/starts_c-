#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
	
	Sample example of while and do while loop
	
	Marking the difference between them:
	
	* do while: execute atleast once regardless the condition.
*/

main() {
	int i = 6;
	while(i<=5){
		cout << i << endl;
		i++;
	}
	
	do {
		cout << i << endl;
		i++;
	}
	while(i<=5);
	cout << i << endl;
	return 0;
}