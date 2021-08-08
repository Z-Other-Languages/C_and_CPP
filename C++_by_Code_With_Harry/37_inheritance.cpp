/*
Derived Class Syntax

class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

Note :-
1. Default visiblity mode is private
2. Public Visibility Mode : Public members of the base class become Public members of the derived class
3. Private Visibility Mode : Public members of the base class become Private members of the derived class
4. Private members are not inherited.
*/


#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;

    Employee(){}    // Deafault constructor must be called to create its objects in the main funciton

    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
};

// Creating a Programmer class derived from Employee Base Class
class Programmer : Employee
{
    public:
        Programmer(){};
        Programmer(int inpId)
        {
            id = inpId;
        }
        int lanaguageCode = 1010;

        void getData()
        {
            cout<< id << endl;
        }
};

int main()
{
    Employee ayush(1), ansh(5);
    cout<< ayush.salary << endl;
    cout<< ansh.salary << endl;
    
    Programmer skillF(99);
    cout<< skillF.lanaguageCode << endl;
    cout<< skillF.id << endl;
    skillF.getData();
    return 0;
}