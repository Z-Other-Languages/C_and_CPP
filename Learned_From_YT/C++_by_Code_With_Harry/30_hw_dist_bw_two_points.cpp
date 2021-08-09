/* 
Create a Function (Make it a friend function) which takes two point objects
and print the distance between them
*/

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
    Point(int a)
    {
        x = a;
        // y = b;
        y =15;
    }
    
    void distance()
    {
        double z = sqrt(x*x + y*y);
        cout<< "Distance between "<< x <<" & " << y <<" is : " << z << endl;
    }
};



int main()
{
    Point p(6,12);
    p.distance();

    Point q(20);
    q.distance();
    return 0;
}