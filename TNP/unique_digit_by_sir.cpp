#include <iostream>
using namespace std;

int main()
{
    int A[10] = {0};
    int n, i;

    cout << "Enter the Number : ";
    cin >> n; // 232356

    while (n > 0)
    {                   // 232
        int r = n % 10; // 2
        A[r]++;         // A[2]++
        n = n / 10;     // 2
    }

    cout << "Frequency of Unit Digits : \n";
    for (i = 0; i < 10; i++)
    {
        cout << " " << A[i];
    }

    cout << "\nUnique DIGIT : ";
    for (int i = 0; i < 10; i++)
    {
        if (A[i] == 1)
        {
            cout << i;
        }
    }
}