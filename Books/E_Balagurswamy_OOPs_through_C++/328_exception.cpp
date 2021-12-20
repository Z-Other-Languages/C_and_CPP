// E Balagurusamy   Pg 328

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<< "Enter Values of a and b : \n";
    cin>> a >> b;
    int x = a-b;

    try{

        // Block of statements which detects and throws and exception.
        if(x != 0)
            cout<< "Result(a/x) = " << (float)a/x << endl;
        else    
            throw(x);
    }

    catch(int i){    // catches the exception

        // Block of statement that handles the exception.
        cout<< "Exception Caught : x = " << x << "\n";
    }
    cout<< "END.. \n\n";

    return 0;

}