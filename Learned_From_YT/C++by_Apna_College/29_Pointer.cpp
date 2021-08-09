// Function me jab hmm argument pass krte hai tb sirf value pass hoti hai variable nhi

// learn pointer, array pointer, swapping through calling by reference.

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void eg_1()
{
    int a= 10;
    int* aptr;
    aptr = &a;

    cout<< &a << endl;
    cout<< aptr << endl;
    cout<< *aptr << endl;  // star ptr stores the value else others stores the address

    ++aptr;
    cout<< aptr << endl;
}

void eg_2()
{
    int arr[] = {10,20, 30};
    cout<< *arr << endl;

    int *ptr = arr;
    for (int i=0; i<3; i++)
    {
        cout<< *ptr << endl;  // stores the value
        ptr++;
    }

}
void eg_3()
{
    int arr[] = {10,20, 35};
    // cout<< *arr << endl;  // stores the value

    int *ptr = arr;
    for (int i=0; i<3; i++)
    {
        cout<< *(arr+i) << endl;
        // arr++; // illegal 
    }

}

void pointerToPointer()
{
    int a=10;
    int *p;
    p = &a;

    cout<< *p << endl;

    // int **q = &p;
    int **q;
    q = &p;

    cout<< *q << endl;
    cout<< **q << endl;
}

void swap_by_pointer(int *a, int *b)
{
    int temp= *a;
    *a = *b;
    *b= temp;
}

int main()
{
    // eg_3();
    // pointerToPointer();


    // SWAPPING BY USING POINTER
    int a=2;
    int b=10;

    swap_by_pointer(&a, &b);
    cout<< "a :" << a << endl << "b : " << b << endl;
    

    return 0;
}