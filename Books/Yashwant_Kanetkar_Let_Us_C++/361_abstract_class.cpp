/*
    Abstract class : 📌
    A class from which we would never want to create objects is called an abstract class.

    Important Points :- ✨✨

    1. Such a class exists only as a parent for the derived classes.

    2. Now how do we communicate to users who are going to use our classes that they should never create an object of the base class.

    3. A better way to do would be to write the base class such that any object creation from it becomes impossible.

    4. This can be achieved by placing at least ✨ one pure virtual function in the base class.

    5. Whenever a pure virtual function is placed in the base class, you must override it in all the derived classes from which you wish to create object. 
    If you don't do this in a derived class then the derive class becomes an abstract class.

*/

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display() = 0;
};

class Derive : public Base
{
public:
    // you must(compulsory) override it in all the derived classes from which you wish to create object. (⌛ Refer to point 5)
    void display()
    {
        cout << "\n\nDerive class 1. \n\n";
    }
};

int main()
{
    // Base obj;    // ❌ (⌛ Refer to point 3)

    Derive obj_d;

    obj_d.display();

    return 0;
}

