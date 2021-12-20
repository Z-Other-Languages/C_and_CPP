/*
    Instead of using goto use while loop as given below.

    goto statement is not used by good programmers.
*/

#include <iostream>
using namespace std;

int main()
{
    int e;

    // while(true)
    while(1)
    {
        cout<< "Select Any Option : ";
        cin>> e;
        switch(e){
            case 1:
                cout<< "Inserted \n";
                break;

            case 2:
                cout<< "Deleted \n";
                break;

            case 3:
                cout<< "Exit Successfully \n";
                exit(0);

            default :
                cout<< "Enter the Correct Option !  ";
        }
        
    }

    return 0;
}