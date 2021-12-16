#include<iostream>
#include <cstdio>
#include <iomanip> 
using namespace std;

int main()
{
    float d;
    double e;

    d = 23.5666;
    e = 20.456318;

    cout << std::fixed << std::setprecision(3) << d << '\n';
    cout << std::fixed << std::setprecision(9) << e << '\n';
}