// Virutal Function calling from the main() using
//           ✨ 1. Base class pointer object
//           ✨ 2. Base class reference object

/*
                            No Virtual keyword              Virtual Keyword
                                    |                               |
                                    V                               V
Calling function based on :   type of pointer               address stored in ptr        
*/

/*
    upcasting**

    def:
    Taking the address of the derived class object and treating it as the address of the base class object is called upcasting.

    -----------------------------------------------------------

    The Rule here is that the the Compiler selects the function to be called :
    -> Based on the contents of the pointer,
    -> Not on the type of the pointer


    Some Important Points :- ⭐⭐
    🟢 Choosing functions in a Normal way, i.e., during  compilation, is called early or static binding.

    🟢 


    Q. Which version of display() does the compiler call ?
    Ans. Infact the compiler doesn't know what to do, so it arranges for the decision to be deferred until the program is running.

    This is because Late Binding or  Dynamic binding.


*/

#include <iostream>
using namespace std;

class Base
{
public:
    // void display()  // Compile Time Binding
    virtual void display() = 0; // Run Time Binding
    // {
    //     cout << "\nInside the Base Class. \n";
    // }
};

class Derived_one : public Base
{
public:
    void display()
    {
        cout << "\nInside Derived one Class. \n";
    }
};

class Derived_two : public Base
{
public:
    void display()
    {
        cout << "\nInside the Derived two class. \n";
    }
};

void driver_program_using_pointer()
{
    Base *base_ptr;

    base_ptr->display();

    Derived_one d1;
    Derived_two d2;

    base_ptr = &d1; // upcasting**
    base_ptr->display();

    base_ptr = &d2;
    base_ptr->display();
}

/*
    Instead of Pointers had we used references the effect would have been same. The following code shows use of references instead of pointers in main().
    👇👇
*/
void driver_program_using_reference()
{

    Derived_one obj_deriv_1;
    Derived_two obj_deriv_2;

    Base &obj_base_1 = obj_deriv_1;
    Base &obj_base_2 = obj_deriv_2;

    obj_base_1.display();
}

int main()
{
    driver_program_using_pointer();

    // driver_program_using_reference();

    return 0;
}