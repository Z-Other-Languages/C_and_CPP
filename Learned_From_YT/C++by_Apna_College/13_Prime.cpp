// Prime Number, Reverse Number, Armstrong Number
// Armstrong Number : The Number whose sum of cubes of each digit is equal to the same number.

#include <iostream>
#include <cmath>
using namespace std;

void prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a Prime Number.";
            break;
        }
    }
    if (i == n)
    {
        cout << "This is a Prime Number.";
    }
}

void prime_2(int n)
{

    bool flag = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a Prime ";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Prime Number";
    }
}

void reverse_num(int n)
{
    int reverse = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;

        n = n / 10;
    }

    cout << "Reversed Number is : " << reverse;
}

void armstrong_num(int n)
{
    int sum = 0;
    int original_num = n;

    while (n>0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n = n/10;
    }

    if (sum == original_num)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not a Armstrong Number";
    }
}

int main()
{
    cout << "\nEnter a Number : ";
    int n;
    cin >> n;

    prime(n);
    prime_2(n);
    // reverse_num(n);
    // armstrong_num(n);
}