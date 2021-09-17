// WAP using a pointer parmeter that reverse the element of given array.

#include<iostream>
using namespace std;

void swap(int *p1, int *p2)
{
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


int main()
{
    int a, b;
    cout<< "Enter the First Number : ";
    cin>> a ;

    cout<< "Enter the Second Number : ";
    cin>> b;

    int *p1 = &a;
    int *p2 = &b;

    cout<< "Value before Swapping 👇👇" << endl;
    cout<< "a : " << a << endl;
    cout<< "b : " << b <<  endl;
    

    swap(&a, &b);

    cout<< "Value After Swapping 👇👇" << endl;
    cout<< "a : " << a << endl;
    cout<< "b : " << b <<  endl;
    return 0;
}