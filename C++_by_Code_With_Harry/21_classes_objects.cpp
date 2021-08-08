#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee{
    private:
        int a, b, c;
    
    public: 
        int d, e, f;
        void setData(int a, int b, int c);
        void getData(){
            cout<< "Value of a is : " << a << endl;
            cout<< "Value of b is : " << b << endl;
            cout<< "Value of c is : " << c << endl;
            cout<< "Value of d is : " << d << endl;
            cout<< "Value of e is : " << e << endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{   
    Employee ayush;
    ayush.d = 34;
    ayush.e = 88;
    ayush.setData(1,2,3);
    ayush.getData();

    // return 0; 
}