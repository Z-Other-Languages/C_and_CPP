#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Point
{
    int x, y;
public: 
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout<< "Point is : (" << x << "," << y << ")" << endl;
    }

};

int main()
{
    Point p(3, 4);
    Point q(8, 9);

    p.displayPoint();
    q.displayPoint();
    return 0;
}





