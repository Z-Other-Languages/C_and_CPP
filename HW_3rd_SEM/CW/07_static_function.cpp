#include<iostream>
using namespace std;

/*
    ✔ New assumed terms are :
    1. ab = college
    2. 
*/

class College{
    int a;
    static int b ;
    public:
        College()
        {
            // a = ++b;
            a = b++;
        }

    void show_a()
    {
        cout<< "\nValue of a : " << a;
    }

    // static void show_b()
    // {
    //     cout<< "\nstatic b : " << b;
    // }

    void show_b()
    {
        cout<< "\nstatic b : " << b;
    }
    
};

int College :: b;

int main()
{
    College obj;
    obj.show_a();
    obj.show_b();

    return 0;
}