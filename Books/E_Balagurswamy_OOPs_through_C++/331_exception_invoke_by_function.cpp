// Function invoked by try block throwing exception

#include<iostream>
using namespace std;

void divide(int x, int y, int z)    // Function with exception
{
    cout<< "We are inside the function \n";
    if(x-y != 0 )
    {
        int R = z/(x-y);    // R means Real Number
        cout<< "Result : " << R << "\n";
    }
    else
        throw(x-y);
        // throw;     // Output : terminate called without an active exception

}

int main()
{
    try{
        // Block of statements which detects and throws and exception.

        cout<< "We are inside the try block \n";
        divide(10, 20, 30);     // Invoke divide()
        divide(10, 10, 20);
    }

    catch(int i){   // Catches the exception
        cout<< "Caught the exception \n";
    }

    return 0;
}