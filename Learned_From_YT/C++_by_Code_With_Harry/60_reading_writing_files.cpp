/*
    The useful classes for working with files in C++ are
        1. fstreambase
        2. ifstream --> derived from fstreambase
        3. ofstream --> derived from fstreambase

    In order to work with files, you will have to open it. Primarily there are two way to open a file
        1. Using the constructor
        2. Using the member function open() of the class.
*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string str = "Web Designer and Developer";

    // Opening or creating file using constructor and writing to it.
    ofstream os("Sample60.txt"); // writing file
    os << str;    // adding string str to the selected file


    // Opening file using constructor and reading it
    string str2;
    ifstream is("Sample60_b.txt");
    // is >> str2;  // it will store only the first word in str2
    getline(is, str2);  // It will store single line in str2
    cout<< str2;
}