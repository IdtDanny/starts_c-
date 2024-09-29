#include<iostream>
using namespace std;

main(){
	int num;
	char ch;
	
	cout << "Enter number to provide day: ";
	cin >> num;
	switch(num) {
		case 1:
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesday" << endl;
			break;
		case 3:
			cout << "Wednesday" << endl;
			break;
		case 4:
			cout << "Thursday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Saturday" << endl;
			break;
		case 7:
			cout << "Sunday" << endl;
			break;
		default:
			cout << "Invalid Input!" << endl;
	}
	
	cout << "Enter a letter to check if it is a vowel: ";
	cin >> ch;
	switch(ch){
		case 'a':
			cout << "Vowel" << endl;
			break;
		case 'e':
			cout << "Vowel" << endl;
			break;
		case 'i':
			cout << "Vowel" << endl;
			break;
		case 'o':
			cout << "Vowel" << endl;
			break;
		case 'u':
			cout << "Vowel" << endl;
			break;
		default:
			cout << "Not a vowel" << endl;
			break;
	}
	return 0;
}