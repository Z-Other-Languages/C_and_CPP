// Multi Level Inheritance
#include<iostream>
using namespace std;

// Base Class
class GrandParent{
    public:
        string name;

        void get_name(string n){
            name = n;

        }

        void put_name(){

            // here you cannot use 'n' instead of name to get output !!
            // First assumed variable se hi output milega hamesa
            cout<< "\nName is : " << name;

        }

};

// First Derived Class 
class Parent:public GrandParent{
    public:

        int age;
        
        void get_age(int a){
            age = a;
        }

        void put_age(){
            cout<< "\nAge is : "<< age;
        }
    
};

// Second Derived Class
class Child: public Parent{
    public:

        string gender;

        void get_gender(string g){
            gender = g;
        }

        void put_gender(){
            cout<< "\nGender is : " << gender;
        }
};

// main funtion
int main(){
    
    /* creating object of sub class will invoke the construtor of Base class */
    Child c;
    c.get_name("Captain");
    c.get_age(16);
    c.get_gender("Male");

    c.put_age();
    c.put_name();
    c.put_gender();

    return 0;
}