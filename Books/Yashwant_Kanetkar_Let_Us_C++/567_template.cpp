#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// template <class T>
template <typename T>

T mymin(T a, T b)
{
    return (a < b) ? a : b;
}

int main()
{
    int i = 10, j = 20;
    cout << endl
         << mymin(i, j);

    float a = 3.14, b = -9.3;
    cout << endl
         << mymin(a, b);

    char ch1 = 'A', ch2 = 'Z';
    cout << endl
         << mymin(ch1, ch2);

    double d = 1.1, e = 1.11;
    cout << endl
         << mymin(d, e);

    return 0;
}