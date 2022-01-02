#include <iostream>
using namespace std;

template <typename T1, typename T2>

T2 sum(T1 a, T2 b)
{
    // cout << "Sum is : " << a + b << endl;
    return a+b;
}

int main()
{
    int x;
    float y;

    cout << "Enter two Numbers : \n";
    cin >> x >> y;

    // sum<int, float>(x, y);

    cout<< sum(x, y);

    return 0;
}