#include<iostream>
using namespace std;

int main()
{
    int i = 3;

    try{
        // Block of statements which detects and throws an exception

        cout<< "try block UPPER part" << endl;

        if(i = 3)
        {
            // throw;  // terminate called without an active exception
            throw 2;
            // throw 5.23; // it goes to catch of double by default
            // throw (float)5.20;  // it goes to catch of  double parameter
        }

        cout<< "try block LOWER part" << endl; // ❌❌ This is skipped
    }
    catch(int p){   // catches the exception

        // Block of statement that handles the exception
        cout<< "int value exception" << endl;
    }

    catch(double p){
        cout<< "Duble Value Exception" << endl;
    }

    catch(float p){
        cout<< "Float Value Exception" << endl;
    }

    return 0;
}