#include <iostream>
using namespace std;

void eg_1()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        cout << n;
        n = n - 1;
    }
}

void eg_2()
{

    cout << "\nEnter any Numeber : ";
    int n;
    cin >> n;

    do
    {
        cout << n;
        cout << "\nEnter any Numeber : ";

        cin >> n;
    } while (n > 50);
}

int main()
{

    // eg_1();
    eg_2();
}