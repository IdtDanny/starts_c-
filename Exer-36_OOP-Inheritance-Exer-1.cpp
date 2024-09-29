#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
	
	OOP Concept - Inheritance
*/

class person {
	public:
		string name;
		int age;
		
		void display () {
			cout << "Name " << name << endl;
			cout << "Age " << age << endl;
		}
		
		void input () {
			cout << "Enter Name: ";
			cin >> name;
			cout << "Enter age ";
			cin >> age;
		}
};

class student: public person {
	public:
		int year;
		
		void print () {
			cout << "Input Student details " << endl;
		}
		
		void getYear () {
			cout << "Enter year of study: ";
			cin >> year;
		}
		
		void printDetails () {
			cout << "Year of Study " << year << endl;
		}
};

class employee: public person {
	private:
		int salary;
		string department;
	public:
		void print () {
			cout << "Input employee details " << endl;
		}
		
		void getSalary () {
			cout << "Employee salary: ";
			cin >> salary;
		}
		
		void printSalary () {
			cout << "Employee Monthly Salary " << salary << endl;
		}
};

class derived:public person, public student {
	public:
		void displayD () {
			cout << "You are in" << endl;
		}
};

main() {
	student s; // For initializing student object only
	
	person p; // For initializing person object only
	
	employee e; // For initializing employee object only
	
	s.print();
	s.input();
	s.getYear();
	
	s.display();
	s.printDetails();
	
	// -------------
	
	cout << endl;
	
	e.print();
	e.input();
	e.getSalary();
	
	e.display();
	e.printSalary();
	
	cout << endl << endl;
	
	derived d;
	
	d.displayD();
	
	return 0;
}