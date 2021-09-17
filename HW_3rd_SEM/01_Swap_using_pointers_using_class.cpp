// WAP using a pointer parmeter that reverse the element of given array.

#include<iostream>
using namespace std;

class Swapping
{
    int a, b;

    public:
        void get_num();
        void swap()
        {
            return swap(&a, &b);
        }

        void swap(int *p1, int *p2);

        void display();
};

void Swapping :: get_num()
{
    cout<< "Enter the First Number : ";
    cin>> a ;

    cout<< "Enter the Second Number : ";
    cin>> b;

    cout<< "Value before Swapping 👇👇" << endl;
    display();

    int *p1 = &a;
    int *p2 = &b;
}

void Swapping :: swap(int *p1, int *p2)
{
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout<< "Value After Swapping 👇👇" << endl;
    display();
}

void Swapping :: display()
{   
    cout<< "a : " << a << endl;
    cout<< "b : " << b <<  endl;
}

int main()
{
    Swapping obj;
    obj.get_num();
    obj.swap();

    return 0;
}