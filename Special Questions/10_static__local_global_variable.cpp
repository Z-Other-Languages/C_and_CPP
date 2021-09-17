
#include <iostream>
using namespace std;

class student
{
public:
    static int a;
    int b;
};
int student::a;


int fun()
{
    static int p=0; // this will be executed only once, doesn't matter how many times you called the function

    cout<< p++ << endl;
}

int main()
{
    // Learn how to use static int keyword in program
    student s1, s2;
    s1.a = 56;
    cout<< endl << "The Value of a is : " << s2.a << endl;


    // EXAMPLE 2 FOR STATIC KEYWORD
    fun();
    fun();
    fun();


    return 0;
}