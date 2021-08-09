// Prime Number between two given number usign function
// Fibonacci Series
// Factorial
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int my_prime(int n1, int n2)
{
    int num, i;
    for (num = n1; num <= n2; num++)
    {
        for (i = 2; i < num; i++)
        {

            if (num % i == 0)
            {
                break;
            }
        }

        if (num == i)
        {
            cout << i << " ";
        }
    }

    return 0;
}

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

void fibonacci_series(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    cout << t1 << " " << t2 << " ";

    for (int i = 0; i < n; i++)
    {
        nextTerm = t1 + t2;
        cout << nextTerm << " ";

        t1 = t2;
        t2 = nextTerm;
        // b = next;
        // a = b-a;
    }
}

int my_factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << endl;
    cout << fact;
    return fact;
}

int rec_fact(int n)   // Using recursive function
{
    int fact;
    if (n==0 || n==1){
        return 1;
    }
    else
    {
    fact = n * rec_fact(n-1);
    return fact;
    }

}

int main()
{
    int m, n;
    cout << "\nEnter Number : \n";
    // cin >> m >> n;
    cin >> n;

    // fibonacci_series(n);

    // my_factorial(n);

    int y = rec_fact(n);
    cout<< y;
    
    // int r;
    // cin>> n >>r;
    // int combination = my_factorial(n)/my_factorial(r)/my_factorial(n-r);
    // cout<< combination;

    // my_prime(m, n);

    // Apni kaksha madam method is below :
    for (int i = m; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}