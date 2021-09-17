#include<iostream>
using namespace std;

class Factorial{
    
    int n, f = 1;

    public:
        void get_num();
        void fact();

        // 👇👇 this function created so that we can called easily from object created in the main function
        int fact_recursive()
        {
        return fact_recursive(n);   // we can execute this function in an alternate way by returing 
        }

        int fact_recursive(int n);  // This function is use to find factorial using recursive approach by passing parameter.
        void display();
};

void Factorial :: get_num()
{
    cout<< "Enter a positive Integer : " ;
    cin>> n;
}

void Factorial :: fact()
{
    for(int i=1; i<=n; i++)
    {
        f = f * i;
    }
}

int Factorial :: fact_recursive(int n)
{
    if(n ==1 || n == 0)
    {
        return 1;
    }
    else
    {
        f =  n * fact_recursive(n-1);
        return f;
    }
}

void Factorial :: display(){
    cout<< f;
}

int main()
{
    Factorial obj;
    obj.get_num();
    // obj.fact();

    obj.fact_recursive(); // correct this line getting error

    obj.display();

    return 0;
}