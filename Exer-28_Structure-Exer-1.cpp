#include<iostream>
#include<string.h>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
	
	***
*/

struct students{ 
	string regNo;
	string firstName;
	char sex[20];
	char faculty[50];
};

main(){
	int size;
	
	cout << "How many students? ";
	cin >> size;
	
	students Student1[size];
	
	for (int i = 0; i < size; i ++){
		cout << "Enter Reg No: ";
		cin >> Student1[i].regNo;
		
		cout << "Enter First name: ";
		cin >> Student1[i].firstName;
		
		cout << "Enter Gender: ";
		cin >> Student1[i].sex;
		
		cout << "Enter Faculty: ";
		cin >> Student1[i].faculty;
	}
	
	cout << endl;
	
	for (int i = 0; i < size; i++) {
		cout << endl << Student1[i].regNo << endl;
		cout << Student1[i].firstName << endl;
		cout << Student1[i].sex << endl;
		cout << Student1[i].faculty << endl;
	}
		
	return 0;
}