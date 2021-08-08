#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// forward declaration
class c2;

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void inData(int a)
    {
        val1 = 1;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

    public:
        void inData(int a)
        {
            val2 = a;
        }
        void display(void)
        {
            cout<< val2 << endl;
        }
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 obj1;
    c2 obj2;

    obj1.inData(4);
    obj2.inData(98);

    exchange(obj1, obj2);

    obj1.display();
    obj2.display();

    return 0;
}