// Refer to 256_Virtual_function 👇👇
/*
    Instead of Pointers had we used references the effect would have been same. The following code shows use of references instead of pointers in main().
*/
// 🔷🔷🔷🔷🔷🔷🔷🔷🔷🔷🔷🔷🔷🔷🔷🔷🔷🔷🔷🔷🔷🔷🔷🔷


// Learn about Pure Virtual Function : 👇👇👇


#include <iostream>
using namespace std;

class Base
{
public:
    // void display()  // Compile Time Binding
    virtual void display() = 0; // Run Time Binding

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

    /* ❌❌ Base Class ka Pure Virtual Function Call 
    krne pe Error aa rha hai ??👇👇
    */
    // base_ptr->display(); 

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
