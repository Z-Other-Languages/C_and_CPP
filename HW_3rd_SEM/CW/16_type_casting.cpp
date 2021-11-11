#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 2;

    cout<< a/b << endl;     // integer/interger always give integer
    cout<< (float)a/b << endl;  // = 2.5    i.e, auto typecasting

    cout<< 5/2 << endl; // = 2
    cout<< 5/2.0 << endl;   // Higher data type i.e, float is dominating
    cout<< 5.0/2 << endl;   // 👆
    cout<< (float)5/2 << endl;
    

    return 0;
}