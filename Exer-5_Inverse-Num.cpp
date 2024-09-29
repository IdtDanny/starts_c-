#include<iostream>
using namespace std;

main(){
	int num, firstDigit, lastDigit;
	cout << "Enter an Integer number: ";
	cin >> num;
	
	cout << num << endl;
	
	if (num > 0){	
		firstDigit = num/10;
		lastDigit = num%10;
	
		cout << "Inverse of number: " << lastDigit << firstDigit << endl;
	}
	else if (num < 0) {
		num =-num;
		firstDigit = num/10;
		lastDigit = num%10;
	
		cout << "Inverse of number: " << (-1)*lastDigit << firstDigit << endl;
	}
	else {
		cout << "Invalid input!" << endl;
	}
	return 0;
}