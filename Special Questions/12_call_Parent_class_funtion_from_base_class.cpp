#include<iostream>
using namespace std;

class Base
{
    public:
        void display()
        {
            cout<< "\nBase Class";
        }
};

class Derived : public Base
{
    public:
        void fun()
        {
            Base :: display();

            cout<< "\nDerived -> Fun is called.";
        }
};

int main()
{
    Derived der;
    der.fun();

    
}