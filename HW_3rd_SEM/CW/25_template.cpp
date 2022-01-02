#include<iostream>
using namespace std;

template<typename T1>
// template<typename T1, typename T2>

// void sum(T1 a, T2 b)
void sum(T1 a, T1 b)
{
    cout<< "Sum is : " << a+b << endl;
}
int main()
{
    float x; 
    float y;

    cout<< "Enter two Numbers : \n";
    cin>> x >> y;

    // sum<int, float>(x, y);
    
    sum(x, y);
    


    return 0;
}