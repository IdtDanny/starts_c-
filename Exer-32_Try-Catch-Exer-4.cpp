#include<iostream>

using namespace std;

main () {
	string word = "four";
	
	try {
		cout << word.at(4) << endl;
	}
	
	catch (...) { // Special catch block that will caught any type of exception
		cout << "Exception thrown!" << endl; 
	}
	
//	catch(out_of_range& e) {
//		cout << "Exception: " << e.what() << endl;
//	}
	return 0;
}

