// Fucntion template and function template with parameter

#include<iostream>
using namespace std;

// float average(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float average2(float a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// INSTEAD OF CREATING A LOT OF FUNCTION SIMPLY CREATE A TEMPLATE 
template<class T1, class T2, class T=float>
T average(T1 a, T2 b){
    T avg = (a+b)/2.0;
    return avg;
}

template<class T=float>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    // cout<< average(5,8) << endl;
    // cout<< average(5,16) << endl;
    
    // cout<< average2(6.6, 3.8) << endl;

    cout << average<float, float> (5.6, 46.2) << endl;

    float x = 3.95;
    float y = 9.625;
    swapp(x, y);
    cout<< x << endl << y << endl;
}