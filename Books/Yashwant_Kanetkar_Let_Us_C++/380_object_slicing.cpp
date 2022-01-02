/*
    Object Slicing :
    Virtual Functions should however always be called using either a pointer or a reference.

    If we try to do so using an object a phenomenon called object slicing.

*/

#include <iostream>
using namespace std;

class Base
{
private:
    int i;

public:
    Base(int ii)
    {
        i = ii;
    }

    virtual void fun1()
    {
        cout << endl<< "\nValue From Base Class : "
             << i;
    }
};

class Derived : public Base
{
private:
    int j;

public:
    Derived(int iii, int jj) : Base(ii)
    {
        j = jj;
    }

    void fun1()
    {
       Base :: fun1();
        cout<< endl << "Value From Derived Class : " << j << endl << endl;
    }
};

int main()
{
    Base bas(2);
    Derived der(15, 20);

    Base *ptr1 = &bas;
    ptr1->fun1();   // From Base class will be called

    Base *ptr2 = &der;
    ptr2->fun1();   // From Derived Class will be called

    // Base &ref1 = bas;
    // ref1.fun1();    // From Base Class

    // Base &ref2 = der;
    // ref2.fun1();    // From Derive Class


    // bas = der;  // Object Sliced
    // bas.fun1();

}
