#include <iostream>

using namespace std;

class mycomplex
{
    int a;
    int b;

    public:
        void setData(int v1, int v2)
        {
            a=v1;
            b=v2;
        }

    //  👇 Here class name must be same and Object Name may be random 
        void setDataBySum(mycomplex o1, mycomplex o2)
        {
            a = o1.a +o2.a;
            b = o1.b + o2.b;
        }

        void printNum()
        {
            cout<< "Complex Number is : "<< a << " + " << b << "i" << endl;
        }
};


int main()
{
    mycomplex c, d, e;
    c.setData(1, 5);
    c.printNum();
    
    d.setData(4, 5);
    d.printNum();
    
    e.setDataBySum(c, d);
    e.printNum();
    return 0;
}