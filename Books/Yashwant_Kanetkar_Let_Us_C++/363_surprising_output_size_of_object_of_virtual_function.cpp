// 🤯 Surpurising Output Size of the object of Virtual function(of Base Class.)

#include <iostream>
using namespace std;

class Surprise
{
public:
    int i;

    virtual void display()
    {
        cout << "\nInside Surprise Class, Size : 1 \n\n";
    }
};

class Number
{
public:
    int i;

    void display()
    {
        cout << "Inside the Number Class. \n\n";
    }
};

class Simple
{
public:
    void display()
    {
        cout << "Inside Simple Function with no data member. \n\n";
    }
};

int main()
{
    Surprise sur;
    Number num;
    Simple sim;

    cout << "Size of Object of Class :\n";

    cout << "Surprise : " << sizeof(sur);
    // 🟢 Ans 8  = sizeof(int) + sizeof(void pointer) Roughly say
    // bcoz With a Single virtual function in Surprise class, the size of the object
    // 'sur' is the size of the int plus the size of void pointer.

    cout << "\nNumber : " << sizeof(num);

    cout << "\nSimple : " << sizeof(sim);
    // 🟢 Ans 1
    /* As there are no data member in this class the C++ Compiler forces the object to be of Nonzero size(in our case 1 byte).
    Non-zero is fine, but why 1 ? 
    Because the smallest nonzero positive integer is 1.
    */

    return 0;
}