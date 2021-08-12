#include<iostream>
#include<fstream>
using namespace std;

int main(){

    // Creating data file physically
    ofstream MyFile("ab1109.txt");

    MyFile<< "My  New C++ Program Based on File Operation !!";
    MyFile.close();

    // Reading the created file 
    string myText;
    ifstream MyReadFile("abcd.txt");
    
    while(getline(MyReadFile, myText));
    cout<< myText;
    
    return 0;
}