#include <iostream>
using namespace std;

int mymin(int a, int b)
{
    return (a < b) ? a : b;
}

long mymin_2(float a, float b)
{
    return (a < b) ? a : b;
}

void driver_program1()
{
    cout<< "Minimum of : ";
    cout<< mymin(4,9);
}

int main()
{
    // driver_program1();

    cout<< mymin_2(5.9, 2.98);

    return 0;
}