#include<iostream>
#include<string.h>
using namespace std;

int & fun(int &a)
{
    a = 5;
    // return a;

}

int  main()
{
    // enum {car, bike, cycle};
    // cout<< car  << endl;
    // cout<< bike << endl;
    // cout<< cycle << endl;
    int x = 10;

    // fun(x) = 55;
    fun(x);

    cout<< x;
}


