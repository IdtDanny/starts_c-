#include<iostream>
using namespace std;

/*
	Simple Program for Function usage:

	finding a square and power using function.

	***
*/

int square(){
	int s, a;
	cout << "Enter a number to square: ";
	cin >> a;
	s = a * a;
	
	return s;
}

void power(int a, int b) {
	int p = 1;
	int i = 0;
	while(i < b) {
		p *= a;
		i++;
	}
	cout << a << " power " << b << " is " << p << endl;
}

int main(){
	int s = square();
	
	int a, b;
	
	cout << "The result is " << s << endl;
	
	cout << "Enter number and its power: ";
	cin >> a >> b;
	
	power(a,b);
	
	return 0;
}