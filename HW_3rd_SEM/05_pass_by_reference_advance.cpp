// LETS TAKE A DEEP DIVE INTO THE PASS BY REFERENCE & pass by POINTER


#include<iostream>
using namespace std;

// PASS BY REFERENCE 👇👇
void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void display(int& a, int& b)
{
    cout<< endl << "a : " << a << endl;
    cout<< "b : " << b << endl;
}

int main()
{
    int a = 10;
    int b = 65;

    display(a, b);
    
    swap(a, b);
    
    display(a, b);

    return 0;
}