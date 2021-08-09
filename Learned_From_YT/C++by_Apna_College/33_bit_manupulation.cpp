#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int pos)
{
    return (n & (1<<pos)!= 0);
}

int main()
{
    cout<< getBit(5, 5) << endl;

    int y = (5<<3);
    cout << y ;
}
