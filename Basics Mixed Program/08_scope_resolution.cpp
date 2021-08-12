#include<iostream>
using namespace std;

class Sample{
    public:

    Sample(){
        cout<< "Constructor are automatically invoked whenever the object is created " << endl;
    }

    void display();
};

void Sample :: display() {
    cout<< "Hello World." << endl;
}

int main(){
    Sample obj;
    // obj.display();
}