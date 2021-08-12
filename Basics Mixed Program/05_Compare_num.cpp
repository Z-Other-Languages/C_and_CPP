#include <iostream>
using namespace std;

int main()
{

    int a, b, c;

    cout << "\nEnter three Numbers : \n";
    cin >> a >> b >> c;

    if (a > b)
    {

        if (a > c)
        {
            cout << "Greatest number is a : " << a;
        }
        else
        {
            cout << "Greatest number is c : " << c;
        }
    }

    else if (b > c)
    {
        cout << "Greatest Number is b : " << b;
    }

    else
    {
        cout << "Greatest Number is c : " << c;
    }
}