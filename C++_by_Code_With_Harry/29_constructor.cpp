/* 
Constructor :- 
Constructor is a special member function with the same name as that of the class. It is used to initialize the objects of its class. It is automatically invoked whenever the an object is created.
	1. It should be declared in the public section of the class.
	2. They are automatically invoked whenever the object is created.
	3. They can't return values and don't have return types.
	4. It can have default arguments.
We can't refer to their address.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    // creating a constructor
    Complex(void);  // constructor declaration

    void printNumber(void)
    {
        cout<< "Your Number is " << a << " + " << b << "i" << endl;
    }

};

Complex :: Complex(void)  // default constructor
{
    a=3;
    b=5;
}

int
main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}