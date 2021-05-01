#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <fstream>

using namespace std;

int main() {
  
    // open file in input mode
    ifstream inFile;
    string fileName;
    cout << "Enter file name: ";
    cin >> fileName;
    inFile.open(fileName); //name of file or complete path
    char ch;
    // traversing through file till end
    while (inFile) {
        // read a character from file
        inFile.read((char *)&ch, sizeof(ch));
        if (ch == '\n') {
            break;
        } //if
        cout << ch; //prints out
    } //while
    inFile.close(); //closes the files
    return 0;
} //class
