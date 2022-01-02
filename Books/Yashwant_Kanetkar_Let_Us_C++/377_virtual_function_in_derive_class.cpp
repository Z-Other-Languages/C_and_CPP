// virtual function in Derived Class

#include <iostream>
using namespace std;

class base
{
public:
    virtual void fun_1()
    {
        cout << endl
             << "Base -> fun 1 \n";
    }
};

class derived : public base
{
public:
    void fun_1()
    {
        cout << "Derived -> fun 1 \n";
    }

    virtual void fun_2()
    {
        cout << "Derived -> fun 2 \n";
    }

    void krishna()
    {
        cout<< "Hare Krishna";
    }
};

void driver_program()
{
    base *ptr1, *ptr2;
    base bas;
    derived der;

    ptr1 = &bas;
    ptr1->fun_1();

    ptr2 = &der;
    ptr2->fun_1();

    /* 👇 The compiler would pass the calls to fun1(), but it would report an error for the call

    */
    // ptr2->fun_2();   // ❌❌
    ((derived *)ptr2)->fun_2();   // ✔✔
    // To overcome this error, you may call a function of that derived class by casting(i.e, type-casting) the base class pointer.

}

void driver_2()
{
    derived *ptr_der;
    derived der;

    ptr_der = &der;
    ptr_der->fun_2();

    base *ptr_bas;
    ptr_bas = &der;
    // ptr_bas->fun_2();    // ❌❌
    // ptr_bas->krishna(); // ❌❌

}

int main()
{
    driver_program();

    return 0;
}