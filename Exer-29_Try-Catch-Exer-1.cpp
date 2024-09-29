#include <iostream>
using namespace std;

// Function that throws an exception if a negative number is passed
void checkPositive(int number) {
    if (number < 0) {
        throw runtime_error("Negative number encountered!");
    }
}

int main() {
    int num;

    cout << "Enter a positive number: ";
    cin >> num;

    try {
        // Attempt to check if the number is positive
        checkPositive(num);
        cout << "You entered a positive number: " << num << endl;
    } 
    catch (const runtime_error& e) {
        // Catch block to handle the exception
        cout << "Error: " << e.what() << endl;
    }

    // Manual cleanup or post-exception actions can go here.
    cout << "Program completed." << endl;

    return 0;
}