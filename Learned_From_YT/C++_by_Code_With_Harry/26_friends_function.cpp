// Demerit of friend function in OOPS Concept :-
//    It breaks the concept of data hiding feature of the OOPs.

#include <iostream>
using namespace std;

class complexNum
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend complexNum sumComplex(complexNum o1, complexNum o2);

    void printNumber()
    {
        cout << "Your Number is : " << a << " + " << b << "i" << endl;
    }
};

complexNum sumComplex(complexNum o1, complexNum o2)
{
    complexNum o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complexNum c1, c2, sum;

    c1.setNumber(3, 4);
    c1.printNumber();

    c2.setNumber(5, 12);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    
    return 0;
}
