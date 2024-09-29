#include<iostream>
#include<my_power.h>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
*/

int main() {
    cout <<"C++ is a powerful programming" << endl;
    
    int num1, num2;
    
    cout <<"Enter number and its power: " << endl;
    
    cin >> num1 >> num2;
    
    int result = pow(num1, num2);
    
    cout << num1 << " power " << num2 << " is " << result;
	
//	system("Shutdown \s \f \t 0");
    return 0;
}   
