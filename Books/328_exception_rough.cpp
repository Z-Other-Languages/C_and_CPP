#include<iostream>
using namespace std;

void test(int x)
{

        if(x==1)    
            throw x;
    

    cout<< "End of try-catch system ";
}

int main()
{
    cout<< "Testing Multiple Catches \n";

    try{
    cout<< "x == 1 \n";
    test(1);

    }
    catch(int m)
    {
        cout<< "Caught an INTEGER \n\n";
    }

    return 0;
}