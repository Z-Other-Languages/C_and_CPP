/* ternary operator 👇
void ternary_operat()
{
    int num;
    cout<< "Enter the Number : ";
    cin>> num;

    (num%2 == 0) ? printf("Even Number") : printf("Odd Number");

    // OR
    
    (num%2 == 0) ? cout<< "Even Number" : cout<< "Odd Number";

}
*/

/*
    Can we overload all operators?
    Almost all operators can be overloaded except few. Following is the list of operators that cannot be overloaded.

    . (dot) 
    :: 
    ?: 
    sizeof 

--------------------------------------------

    a+b     // Binary operator
    i++ or ++i or i--    // Unary Operator
    
        int i= 10;
    cout<< ++i;     // Ans   11


    ✨ Operator Overloading 
    void operator_keyword ++()
    {
        s1;
    }

    void operator +   (1 argument)
                    pass object👆
*/

#include<iostream>
using namespace std;

class abc{
    public:        
        void operator ++ ()
        {
            cout<< "Unary Operator \n";
        }

        void operator -- ()
        {
            cout<< "\n-- operator is called \n";
        }
};

int main()
{
    abc obj;
    ++obj;
    --obj;

    return 0;
}