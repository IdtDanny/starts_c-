/* 
    Simple Calculator C++ Program using functions

    1 - Open the file in VS
    2 - Click Ctrl+Shift+` to open terminal
    3 - Compile the program by "g++ filename.cpp -o filename.exe"
    4 - Execute the program by ".\finemame.exe"
    5 - Input this Sample: "65+10" and hit Enter - You should see "The Sum is 75"
*/

#include<iostream>
using namespace std;

int sum(int num1, int num2) {
    int sum = num1 + num2;
    cout << "The sum is " << sum << endl;
    return sum;
}

int diff(int num1, int num2) {
    int diff = num1 - num2;
    cout << "The Difference is " << diff << endl;
    return diff;
}

int quotient(int num1, int num2) {
    int quotient = num1 / num2;
    cout << "The quotient is " << quotient << endl;
    return quotient;
}

int product(int num1, int num2) {
    int product = num1 * num2;
    cout << "The product is " << product << endl;
    return product;
}

int main() {
    cout <<"Hello there!" << endl;
    cout << "CALCULATOR" << endl;
    cout << "==========" << endl;
    int num1, num2;
    char sign;
    
    cin >> num1 >> sign >> num2;

    switch(sign){
        case '+':
            sum(num1, num2);
            break;
        case '-':
            diff(num1, num2);
            break;
        case '/':
            quotient(num1, num2);
            break;
        case '*':
            product(num1, num2);
            break;
        default:
            cout << "Invalic sign!" << endl;
            break;
    }

    return 0;
}