// Constructor Example
#include<iostream>
using namespace std;

class MyClass{
    public:

    int a;
    int b;

    MyClass(int x, int y){
        a=x;
        b=y;
    }

    void joker(){
        cout<< "\nValue of a is : " << a;
        cout<< "\nValue of b is : " << b;
    }
    
};

int main(){
    MyClass obj(10, 90);
    obj.joker();
}

