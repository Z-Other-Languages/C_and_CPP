#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Number
{
    int a;
public:
    Number(){
        a =0;
    };

    Number(int num)
    {
        a = num;
    }

    // When no copy constructor is found then compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout<< endl << "Copy Constructor is Called " << endl;
        a = obj.a;
    }

    void display()
    {
        cout<< "The Number for this Object is : " << a << endl;
    }
};

int main()
{
    Number n1, n2, z(45), z2;
    n1 = Number(5);
    n1.display();

    // ALTERNATE
    Number p(n2);   // copy constructor is invoked
    p.display();

    Number n3 = n1;     // copy constructor is invoked
    n3.display();

    z2 = z;     // copy constructor is not invoked

    return 0;
}