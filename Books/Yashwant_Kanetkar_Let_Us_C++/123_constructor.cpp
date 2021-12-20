/*
    If we declare an object of a particular class type and the class doesn't have a constructor ?
    Nothing. Because when no constructor is present in a class the compiler builds an implicit constructor. 

    The zero-argument constructor in our program is this implicit constructor.
*/

#include<iostream>
using namespace std;

class integer
{
    private:
        int i;
    
    public:
        void get_data(){
            cout<< endl << "Enter any Integer : ";
            cin>> i;
        }

    void set_data(int j){
        i = j;
    }

    integer(){  // zero argument constructor

    }

    integer(int j){ // one argument constructor
        i =j;
    }

    void display_data(){
        cout<< endl << "Value of i = " << i << endl;
    }

};

int main()
{

    integer i1(100), i2, i3;
    i1.display_data();

    i2.set_data(200);
    i2.display_data();

    i3.get_data();
    i3.display_data();

}