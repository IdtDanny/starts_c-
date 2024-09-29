#include<iostream>
using namespace std;

main(){
	float amount;
	string currency;
	
	cout << "Currency Converter | Euro (1600 Rwf) & Dollar (1450 Rwf)" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "Is it Euro or Dollar: ";
	cin >> currency;
	
	if (currency == "Euro") {
		cout << "How much Euro: ";
		cin >> amount;
		cout << "It's " << amount*1600 << " Rwf" << endl;
	}
	else if (currency == "Dollar") {
		cout << "How much Dollar: ";
		cin >> amount;
		cout << "It's " << amount*1450 << " Rwf" << endl;
	}
	else {
		cout << "Wrong Currency" << endl;
	}
	return 0;
}