// Destructor never takes an argument nor does it return any value

#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int count = 0;

class num
{
    public:
        num()
        {
            count++;
            cout<< "This is the time when constructor is called for Object Number : " << count << endl;
        }
        ~num()
        {
            cout<< "Destructor is called for the Object Numbe : " << count << endl;
            count--;
        }


};

int main()
{
    cout<< "We are Inside Our Main Function : " << endl;
    cout<< "Creating our first function n1 "<< endl << endl;

    num n1;
    {
        cout<< "Entering This Block";
        cout<< "Creating Two more objects."<< endl;
        num n2, n3;
        cout<< "Exiting this block" << endl << endl;
    }

    cout<< "We are back to the main" << endl;
    
    return 0;
}