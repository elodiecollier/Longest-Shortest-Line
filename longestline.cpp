#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  
   ifstream inFile;
   string fName;
   cout << "Enter input file name: ";
   cin >> fName;
   string line;
   //the name of the file goes below
   // provide the complete path if need
   inFile.open(fName);
   long unsigned int maxLength = 0;
   if (inFile.is_open()) {
     while (getline(inFile, line,'\n')) {
       // gets text by line
       if (line.length() > maxLength){
	 maxLength = line.length();
       } //if
       break;
     } //while
     inFile.close(); //closes file 
   } //if
   else {
     cout << "File not found." << endl;
   } //else
   cout << "Max length of file: " << maxLength << endl;
}
//class
