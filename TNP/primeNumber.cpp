#include <iostream>
using namespace std;

void checkPrime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not a Prime Number ! \n";
            break;
        }
    }

    if (i == n)
    {
        cout << endl
             << n << " is a prime number";
    }
}

int main()
{
    while (true)
    {
        cout << "\n\n--------------------------------------------------------";
        cout << "\nCheck for Prime Number \nEnter any Number : ";
        int num, i;
        cin >> num;

        if (num < 0)
            cout << num << " entered Number is Negative.";
        else if (num == 0)
            cout << "ZERO is not a Prime Number.";
        else if (num == 1)
            cout << "1 is not a Prime Number.";
        else
            checkPrime(num);
        cout << "\n\n--------------------------------------------------------";
    }
}