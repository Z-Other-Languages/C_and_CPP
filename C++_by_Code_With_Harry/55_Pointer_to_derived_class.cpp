#include <iostream>
using namespace std;

class Base{
    public:
        int var_base;
        
        // void display(){
        virtual void display(){     // by using virtual keyword, this base function will not execute but derived function will execute
            cout<< endl <<  "1. Displaying Base Class Variable Using var_base from Base Class : " << var_base << endl;
        }
};

class Derived : public Base{
    public:
        int var_derived;
         void display(){
            cout<< endl << "2.1 Displaying Base Class Variable from Derived Class : " << var_base << endl;
            cout<< endl << "2.2 Displaying Derived Class Variable using var_derived from Derived Class : " << var_derived << endl;
        }
};

int main(){

    Base *ptr_base;
    Base obj_base;
    Derived obj_derive;

    ptr_base = &obj_derive; // Pointing Base Class Pointer to Derived Class Object
    ptr_base->var_base = 99;
    ptr_base->display();

    // ptr_base->var_derived = 18;  // This is wrong because base class pointer can't access the Derived class variable
    // ptr_base->display();


    // Below creating Derived class pointer and derived class object
    // Derived *ptr_derive;
    // Derived obj_derive;

    // ptr_derive = &obj_derive;
    // ptr_derive->var_derived = 49;
    // ptr_derive->display();

}
