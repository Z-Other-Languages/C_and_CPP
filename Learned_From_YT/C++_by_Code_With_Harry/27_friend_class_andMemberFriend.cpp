#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// forward declaration
class Complex;

class Calculator
{
    public:
        int add(int a, int b)
        {
            return (a+b);
        }
        int sumRealComplex(Complex, Complex);
        int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    friend int Calculator :: sumRealComplex(Complex, Complex);
    friend int Calculator :: sumCompComplex(Complex, Complex);

    // ALITER ->  Declaring the entire Calculator class as Friend at once
    friend Calculator;

    public:
        void setNumber(int n1, int n2)
        {
            a=n1;
            b=n2;
        }
        void printNumber()
        {
            cout<< "Your Number is : " << a << " + " << b << "i" << endl;
        }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2)
{
    return ( o1.a + o2.a );
}

int Calculator :: sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}


int main()
{
    Complex o1, o2;
    o1.setNumber(4, 8);
    o2.setNumber(6, 22);

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout<< "Sum of Real Part is : " << res << endl;

    int resc = calc.sumCompComplex(o1, o2);
    cout<< "Complex Part Sum is : " << resc << endl;
    
    return 0;
}