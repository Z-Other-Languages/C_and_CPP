// Read and write in same progam and closing file
// is and os is my custom abbrev. which means input Stream and output stream respectively.

#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main(){

    ofstream os("Sample.txt");

    // creating  a string and filling it with the user input
    cout<< "Enter your Name : " ;
    string name;
    cin>> name;

    // Writing a string to the file
    os << "Is your name : " + name;
    os.close();

    ifstream is("Sample60.txt");
    string content;
    is >> content;
    cout<< "File content is : " << content;
    is.close();
}