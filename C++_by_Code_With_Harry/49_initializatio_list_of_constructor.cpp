#include <iostream>
using namespace std;
/*
Syntax for initializtion list in Constructor : 
    constructor (argument-list) : initialization_section
    {

    }
*/

class Test
{
    int a;
    int b;
public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(j), b(i)
    // Test(int i, int j) : b(j), a(i)
    // Test(int i, int j) : b(i), a(j)
    // Test(int i, int j) : a(i), b(j+a)
    // Test(int i, int j) : b(i), a(j+a)    // Red Flag Error
    Test(int i, int j) : b(i), a(j+b)       // Red Flag Error
    {
        cout<< "Constructor is Executed." << endl;
        cout<< "Value of a : " << a << endl;
        cout<< "Value of b : " << b << endl;
        void print();
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}