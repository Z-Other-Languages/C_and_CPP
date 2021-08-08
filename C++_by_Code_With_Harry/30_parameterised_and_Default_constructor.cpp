#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);  // constructor declaration

    void printNumber()
    {
        cout<< "Your Number is : " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(int x, int y) // This is Parameterized constructor as it takes two parameters
{
    a =x;
    b =y;
}

int main()
{
    // Implicit Call
    Complex a(4, 6);

    // Explicit Call
    Complex b = Complex(5, 12);

    a.printNumber();
    b.printNumber();


    return 0;
}