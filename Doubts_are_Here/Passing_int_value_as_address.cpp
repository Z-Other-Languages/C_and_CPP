/* 
!Error.
        Only two array are passing arr[0] and arr[1]
        and gettion error when passing third array arr[2]

Solution : 
    Bhai array hamsa pass by reference hota hai ...
    *Pointer lagane ki jrurat nhi

*/

#include<iostream>
using namespace std;

void pass_integer(int *arr)
{
    arr[0] = 545;
    arr[1] = 76;

    arr[2] = 87;   // Now able to pass this third value
    arr[3] = 100;
}

void output(int arr[])
{
    cout<< arr[0] << endl;
    cout<< arr[1] << endl;        

    // Just comment this below line then program will run easily else now running
    cout<< arr[2] << endl;    // this value is now printing
    cout<< arr[3] << endl;
}

int main()
{
    // Pass integer  value
    int* arr;
    arr = new int[100];

    pass_integer(arr);

    output(arr);
}