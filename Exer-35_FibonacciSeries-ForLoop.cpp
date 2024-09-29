#include<iostream>
using namespace std;

main () {
	int num1 = 0;
	int num2 = 1;
	int num3;
	
	for (int i = 0; i < 20; i++){
		if (i == 1) {
			cout << num2 << ", ";
			continue;
		}
			
		cout << num3;
		if (i < 19) 
			cout << ", ";
	
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
	}
	
	cout << endl;
	
	return 0;
}