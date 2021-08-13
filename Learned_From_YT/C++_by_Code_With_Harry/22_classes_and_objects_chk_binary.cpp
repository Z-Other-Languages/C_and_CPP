/* 
    Taking binary number as input.

    Checking the entered number is binary or not.

    Reversing the Binary Number.

    Displaying the output.

*/

#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

class binary
{           
        // in classes By default anything declared without mentioning is Private
    private: 
        string s;
        void chk_bin(void);

    public:
        void read();
        void ones_compliment(void);
        void display(void);
};

void binary :: read()
{
    cout<< "Enter a Binary Number : ";
    cin >> s;
}

void binary :: chk_bin(void)
{
    for (int i=0; i< s.length(); i++)
    {
        if (s.at(i)!= '0'   &&  s.at(i)!= '1' )
        {
            cout<< "Incorrect Binary Format " << endl;
            exit(0);
        }
    }
}

void binary :: ones_compliment()
{
    chk_bin();

    for (int i=0; i<s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}

void binary :: display(void)
{
    cout<< "Displaying Your Binary Numbers : ";
    for (int i=0; i<s.length(); i++)
    {
        cout<< s.at(i);
    }
    cout<< endl;
}



int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();   
    
    return 0;
}