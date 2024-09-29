#include<iostream>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny
	
	switch the choice of area.
	
	do while(): Iterate the choice until user says otherwise. 
*/

#define PI 3.14

main (){
	int choice, w, h, area, base;
	float rad;
	
	string repeat;
	
	do{
		cout << "Proceed with Area of: \n1. Rectange \n2. Triangle \n3. Circle \n";
		cin >> choice;
		
		switch (choice) {
			case 1:
				cout << "Enter Width and Length: \n";
				cin >> w >> h;
				area = w * h;
				cout << "The area of rectangle with: \nLength: " << h << "\nWidth: " << w << "\nis " << area;
				break;
			case 2:
				cout << "Enter Base and Height: \n";
				cin >> base >> h;
				area = (base*h)/2;
				cout << "The area of Triangle with: \nBase: " << base << "\nHeight: " << h << "\nis " << area;
				break;
			case 3:
				cout << "Enter radius of Circle: \n";
				cin >> rad;
				float areaCircle;
				areaCircle = rad * rad * PI;
				cout << "The area of Circle with: \nRadius: " << rad << "\nis " << areaCircle;
				break;
			default:
				cout << "Invalid Choice";
		}
		cout << "\n\nDo you want to repeat? \nYes(1) / No(0): \n";
		cin >> repeat;
		cout << "--------------------\n";
	} while(repeat == "Yes" || repeat == "1");
	return 0;
}