// C++ program to demonstrate
// accessing of data members
 
// #include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Student
{
    // Access specifier
    public:
 
    // Data Members
    string name, section, branch, college;
 
    // Member Functions()
    void display()
    {
       cout << "Name of Student is : " << name << endl;
       cout << "Section            : " << section << endl;
       cout << "Branch             : " << branch << endl;
       cout << "College            : " << college << endl;
    }
};
 
int main() {
 
    // Declare an object of class geeks
    Student obj1;
 
    // accessing data member
    obj1.name = "Ayush Kumar";
    obj1.section = "A12";
    obj1.branch = "Computer Science";
    obj1.college = "LNCT Groups of Colleges";
 
    // accessing member function
    obj1.display();
    return 0;
    
}