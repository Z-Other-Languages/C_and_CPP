#include<iostream>
using namespace std;

void fun(int a =2, float b = 5.6)
{
    cout<< "First Parameter : " << a << endl;
    cout<< "Second Parameter : " << b << endl;
    cout<< endl << endl;
}

void experiment(int x, float y = 9.9)
{
    
}

int main()
{
    cout<< "\n\n";

    fun();
    fun(102);
    fun(10.4);

    fun(55, 55);
    fun(NULL, 10.4);

}