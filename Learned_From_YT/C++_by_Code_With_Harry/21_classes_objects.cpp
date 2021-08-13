/*
    An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

    There are three access modifiers : public, private and protected.

    Note 1 :-  
        Any data memeber or function which is declared without without any access modifier is by default always private.

    There are 2 ways to define a member function:
    1.    Inside class definition
    2.    Outside class definition

            To define a member function outside the class definition we have to use the scope resolution :: operator along with class name and function name.

*/

#include <iostream>
using namespace std;

class Employee
{
    // access specifier - public, private, protected
    private:

        // data members
        int a, b, c;
        string str;
    
    public: 
        int d, e, f;

    // Member function :-

        // Outside Member Fuction 👇👇
        void setData(int a, int b, int c);

        // Inside Member Function 👇👇
        void getData(){
            cout<< "Value of a is : " << a << endl;
            cout<< "Value of b is : " << b << endl;
            cout<< "Value of c is : " << c << endl;
            cout<< "Value of d is : " << d << endl;
            cout<< "Value of e is : " << e << endl;
        }
};

/*
    define a member function outside the class definition we have to use the scope resolution :: operator along with class name and function name. 
    👇👇
*/
void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{   
    // declare an object 'ayush' of the class Employee
    Employee ayush;

    // accessing data members
    ayush.d = 34;
    ayush.e = 88;

    // accessing memeber function and calling them
    ayush.setData(1,2,3);
    ayush.getData();

    return 0; 
}