#include<iostream>
using namespace std;

void condition_1()
{
    float *p;

    int a;

    p = a;  // wrong
    p = &a; // wrong
}

void condition_2()
{
    float *p;

    float a;

    // p = a;  // wrong ❌❌
    p = &a; // right ✔✔
}

int main()
{
    condition_1();
}