/*
Syntax for inheriting in Multiple Inheritance

    class Derived_class :: visibility_mode Base1, visibility_mode Base2, visibility_mode Base3
    {
    };

*/

#include <iostream>
using namespace std;

class Base1
{
    protected:
        int b1;
    public:
        void set_baseInt1(int i)
        {
            b1 =i;
        }
};

class Base2
{
    protected:
        int b2;
    public:
        void set_baseInt2(int j)
        {
            b2 = j;
        }
};

class Derived : public Base1, public Base2
{
    public:
        void show();
};

void Derived :: show()
{
    cout<< "Value of base 1 is : " << b1 << endl
        << "value of Base 2 is : " << b2 << endl
        << "Sum of these Values : " << b1 +b2 << endl;
}

int main()
{
    Derived d;
    d.set_baseInt1(55);
    d.set_baseInt2(77);
    d.show();
    return 0;
}