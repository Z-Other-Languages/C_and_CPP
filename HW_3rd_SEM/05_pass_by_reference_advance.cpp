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

void swap_by_pointer(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
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
    swap(a, b);     // swapping by pass by reference
    display(a, b);

  
    // Swapping by pass by Pointer
    int x = 17;
    int y = 34;
    cout<< "\n\nSwapping Using pass by pointer.";
    swap_by_pointer(&x, &y);
    cout<< endl << "x : " << x << endl;
    cout<< "y : " << y << endl;

    
}