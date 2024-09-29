#include<iostream>
#include<math.h>
using namespace std;

/*
	@idtdanny - https://github.com/idtdanny

	Fetching userMarks and count the students according to the grade:
		A: 100 - 80
		B: 79 - 70
		C: 69 - 60
		D: 59 - 50
		F: 49 - 40
	Output sample:
		Enter mark 1: 23
				|
		Enter mark 10: 53
		
		2 Students scored A
		0 Students scored B
		2 Students scored C
		1 Students scored D
		5 Students Failed
		
		97 is the highest
*/

main(){
	
	int marks[10], i, largest;
	
	i = 0; 
	
	int range[5] = { 0, 0, 0, 0, 0};
	
	// reading marks from the user
	
	while (i < 10) {
		cout << "Enter mark " << i + 1 << ": ";
		cin >> marks[i];
		if (marks[i] > 100){
			cout << "Input value between 0 - 100 try again!" << endl;
			continue;
		}
		i++;
	}
	
	// Fetching the highest score
	
	largest = marks[0];
	
	for (i = 0; i < 10; i++) {
		largest = fmax(marks[i], largest);
		
//		if (marks[i] > largest) {
//			largest = marks[i];
//		}
		
		// Search user who scored 100 and display index
		if (marks[i] == 100)
			cout << endl << "Students who scored 100 is at " << i << " Index" << endl; 
		 
	}
	
	// Grading students
	
	for (i = 0; i < 10; i++) {
		
		// Grade A students
		if (marks[i] <= 100 && marks[i] >= 80) {
			range[0]++;
		}
				
		// Grade B students
		if (marks[i] <= 79 && marks[i] >= 70) {
			range[1]++;
		}	

		// Grade C students
		if (marks[i] <= 69 && marks[i] >= 60) {
			range[2]++;
		}

		// Grade D students
		if (marks[i] <= 59 && marks[i] >= 50) {
			range[3]++;
		}
		
		// Grade F students
		if (marks[i] <= 49 && marks[i] >= 0) {
			range[4]++;
		}
	}
	
	cout << endl << range[0]  << " Students scored A" << endl;
	cout << range[1]  << " Students scored B" << endl;
	cout << range[2]  << " Students scored C" << endl;
	cout << range[3]  << " Students scored D" << endl;
	cout << range[4]  << " Students Failed" << endl;
	
	cout << endl << largest << " is the highest score." << endl;
	
	return 0;
}