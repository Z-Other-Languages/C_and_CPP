#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id, salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the ID of the Employee : ";
        cin >> id;        
    }
    void getId(void)
    {        
        cout << "The ID of Employee is : " << id << endl;
        cout<< "Salary is : " << salary << endl;
    }
};

int main()
{
    // Employee a, b, c;
    // a.setId();
    // a.getId();

    // USING ARRAY FOR OBJECTS
    Employee arr[3];

    for (int i = 0; i < 3; i++)
    {
        arr[i].setId();
        arr[i].getId();
        cout<< endl;
    }

    
    return 0;
}