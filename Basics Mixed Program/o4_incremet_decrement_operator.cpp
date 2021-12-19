#include <iostream>
using namespace std;

/*👉 The below code compleately explains the use of diffrent unary operators*/

int main()
{

    int a, b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;

    cout << "This is pre increment: " << ++a << endl;
    cout << "This is pre decrement: " << --b << endl;
    cout << "This is post increment: " << a++ << endl;
    cout << "This is post decrement: " << b++ << endl;
}