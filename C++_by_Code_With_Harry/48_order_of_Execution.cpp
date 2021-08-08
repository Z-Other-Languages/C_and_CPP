/*
CASE 1 :
    class B : public A
    Order of Execution of Constructor, first A (Base Class) then B (Derived Class).

CASE 2:
    class C : public A, public B
    Order of Execution of Constructor, first A(inital written base class) then B (2nd Base class), then C (derived class)

CASE 3:
    class C : public A, virtual public B
    Note here that virtual Base class is given higher priority than first written base class
    So, first constructor B will execute then A, and lastly class C will execute.
*/

#include <iostream>
using namespace std;

class Base1
{
    int data1;
    public:
        Base1(int i)
        {
            data1 =i;
            cout<< "Base 1 class constructor is Executed." << endl;
        }
        void printDataBase1()
        {
            cout<< "Value of data  1 is : " << data1 << endl;
        }
};

class Base2
{
    int data2;
    public:
        Base2(int i)
        {
            data2 =i;
            cout<< "Base 2 class constructor is Executed." << endl;
        }
        void printDataBase2()
        {
            cout<< "Value of data  1 is : " << data2 << endl;
        }
};

class Derived : public Base2, public Base1
{
    int d1, d2;
    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
        {
            d1 =c;
            d2 =d;
            cout<< "Derived Class Constructor is Executed." << endl;
        }
        void printDataDerived()
        {
            cout<< "Value of d1 : " << d1 << endl;
            cout<< "Value of d2 : " << d2 << endl;
        }
};

int main()
{
    Derived d(1,2,3,4);
    d.printDataBase1();
    d.printDataBase2();
    d.printDataDerived();
}