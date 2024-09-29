#include <iostream>
using namespace std;

// Can not start primary while under seven

int power(int a, int b){
	int p = 1;
	for (int i = 0; i < b; i++){
		p *= a; 
	}	
	return p;
}

int main() {
  try {
  	
    int age;
    int error = 505;
    int base = power(2,4);
    
    string errorWords = "Error";
    
    cout << "Enter your age: ";
    cin >> age;
    
    if (age >= 7) {
      cout << "Welcome to P1 / Grade1 - you are old enough.";
    } else {
      throw (errorWords);
    }
  }
  
  catch (string thrownWords) {
    cout << "Denied - You are underage.\n";
//    cout << "You are " << thrown << " years old!";
	cout << "Error: " << thrownWords << endl;
  }
  return 0;
}