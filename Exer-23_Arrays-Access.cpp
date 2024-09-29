#include<iostream>
using namespace std;

/*
	Finding the total and average of marks of any number of modules inputed by user out of 100
	
	***
*/

main(){
	
	int i, j, size, sum;
	
	i = 0; j = 0; sum = 0; 
		
	cout << "How many modules? ";
	cin >> size;
	
	int marks[size];
	
	while (j < size) {
		cout << "Enter Mark " << j + 1 << ": ";
		cin >> marks[j];
		j++;
	}
	
	cout << endl;
	
	while (i < size){
		cout << "Mark " << i + 1 << ": " << marks[i] << endl;
		sum += marks[i];
		i++;
	} 
	cout << endl << "Total: " << sum << " / " << size * 100 << endl;
	cout << "Average: " << ((float)sum/(size * 100))*100 << " %" << endl;
	
	return 0;
}