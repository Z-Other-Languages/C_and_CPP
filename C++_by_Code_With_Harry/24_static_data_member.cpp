#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    static int count;

    public:
        void setData(void)
        {
            cout<< "Enter the ID : ";
            cin>> id;
            count++;
        }
        void getData(void)
        {
            cout<< "The ID of the Employee is : "<< id << " and its Employee No is : " << count<< endl;
        }

        static void getCount(void){
            cout<< "The value of Count is : " << count << endl;
        }

};

int Employee :: count;

int main()
{
    Employee a,b,c;

    a.setData();
    a.getData();
    a.getCount();
    
    b.setData();
    b.getData();
    b.getCount();
    
    c.setData();
    c.getData();
    c.getCount();
    
    return 0;
}