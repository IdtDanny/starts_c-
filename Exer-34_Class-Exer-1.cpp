#include<iostream>
using namespace std;

class Car {
	public:
		string name;
		void brake() {
			cout << "Braking" << endl;
		}
};

main(){
	Car car1;
	
	car1.brake();
	
	cout << "Enter the name: ";
	cin >> car1.name;
	
	cout << car1.name << endl;
	
	return 0;
}