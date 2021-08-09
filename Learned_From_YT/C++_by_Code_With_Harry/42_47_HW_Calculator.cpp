#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class SimpleCalculator
{
    int x, y;
    char op;

public:
    void input(void)
    {
        cout << "Enter Two Numbers : " << endl;
        cin >> x >> y;
    }
    void operators(void);
    void result();
};

void SimpleCalculator ::operators()
{

    cout << "Enter any one of the Airthemetic Operator : +  -   *   /       :  ";
    cin >> op;
    cout << endl;
}

void SimpleCalculator ::result()
{

    switch (op)
    {
    case '+':
        cout << "Sum is : " << x + y << endl;
        break;
    case '-':
        cout << "Difference is : " << y - x << endl;
        break;
    case '*':
        cout << "Product is : " << x * y << endl;
        break;
    case '/':
        cout << "Divide is : " << y / x << endl;
        break;

    default:
        break;
    }
}

// class ScientificCalculator{};

int main()
{
    SimpleCalculator s;
    s.input();
    s.operators();
    s.result();
    return 0;
}