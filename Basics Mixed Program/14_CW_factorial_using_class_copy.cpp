#include<iostream>
using namespace std;

class Factorial{
    
    int n, f = 1;

    public:
        void get_num();
        void fact();

        int fact_recursive(){
            return fact_recursive(n);
        }

        int fact_recursive(int n);
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
        f = n * fact_recursive(n-1);
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