#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Simple
{
    int x, y, z;

public:
    Simple(){}
    Simple(int a, int b=4, int c=6)
    {
        x =a;
        y = b;
        z = c;
    }

    void printNum();

};

void Simple :: printNum()
{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}

int main()
{
    /*
    To Executer this method your must include Default Constructor in the public of the class
    like            Simple(){};         
    */
    Simple s; 
    s = Simple(55, 66, 77);
    s.printNum();
    cout<< endl;

    // This below method will run without any requirement of the Default Construtor in the public section of the class.
    // Simple q(11, 22, 33);
    Simple q(11, 22);
    q.printNum();
    return 0;
}