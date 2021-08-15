/* 
Create a Function (Make it a friend function) which takes two point objects
and print the distance between them
*/

#include <iostream>
#include<math.h>
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
    
    friend void distance(Point o1, Point o2);
 
};

void distance(Point o1, Point o2)
{
    double z = sqrt(o1.x*o1.x + o2.x*o2.x);
    cout<< "Distance between "<< o1.x <<" & " << o2.x <<" is : " << z << endl;
}




int main()
{
    // Point p(6, 8);
    
    

    Point q(20);
    // q.distance();

    Point r(25);

    distance(q, r);

    return 0;
}