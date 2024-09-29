#include<iostream>
#include<fstream>

using namespace std;

main() {

// Create a text string, which is used to output the text file
string myText;

// Read from the text file
ifstream MyReadFile("testFile.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file

  if (myText == "Doc!") {
    cout << "Hell upon us!" << endl;
  }
  cout << myText;
}

// Close the file
MyReadFile.close();
    
}
