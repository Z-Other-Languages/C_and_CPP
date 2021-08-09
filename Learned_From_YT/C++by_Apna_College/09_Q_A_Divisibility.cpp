// Q.  WAP to output whether a number is divisible by both 2 and 3 or divisible by only one of them.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "\nEnter a Number : ";
    cin >> n;

    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << n << " ~ is Divisible by both 2 and 3";
    }
    else if (n % 2 == 0)
    {
        cout << n << " ~ is divisible only by 2";
    }
    else if (n % 3 == 0)
    {
        cout << n << " ~ is divisible only by 3";
    }
    else
    {
        cout << n << " ~ is divisible by None of 2 and 3";
    }
}