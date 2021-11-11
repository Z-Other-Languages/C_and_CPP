/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main ()
{
    int size,q;
    int array[size];
    cout<<"enetr t5he size of array ";
    cin>>size;
    cout<<"enterr the elements of array ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"enter the element u want to delete3 from the array";
    cin>>q;
    for(int i=0;i<size;i++)
    {
        if(array[i]==q)
        {
            array[i]=array[i+1];
        }
    }
    cout<<"elements after deleting ";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}

