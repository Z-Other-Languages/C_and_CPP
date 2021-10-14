// C Program to demonstrate difference b/w Pointer & Reference

#include<iostream>
using namespace std;

struct demo
{
    int a;
};

int main()
{
    int x = 5;
    int y = 8;
    demo d;  

    int *p;
    p = &x;
    p = &y; // Here Pointer reinitialization is allowed, 
            // i.e. New address can be reinitialized to the same pointer again

    int &ref = x;
    // &ref = y; // Reference Variable can't be reassigned // Compile Error ❌❌
    
    cout<< "&ref : " << &ref << endl;
    cout<< "ref : " << ref << endl;
    ref = y;  // Value of x becomes equal to y ie 8
    cout<< "ref : " << ref << endl;

    // 2. Pointer can be assigned NULL directly, whereas reference cannot.
    p = NULL;   
    // &ref = NULL ; // Compile Error ❌❌
    cout<< "p : " << *p;


    // 3. Pointers can iterate over an array, we can use increment/decrement operators to go to the next/previous item that a pointer is pointing to. 👇👇

    p++;    // Points to next Memory Location
    ref++;    // Value of x becomes 7


    // 4. A pointer is a variable that holds a memory address. A reference has the same memory address as the item it references. 👇👇

    cout<< "\nAddress of p & x : " << &p  << "  and  " << &x << "  respectively.\n";
    
    cout<< "\nAddress of r & x : " << &ref  << "  and  " << &x << "  respectively.\n";



    // See top of the code, a demo struct is declared
    demo *var_p = &d;
    demo &var_ref = d; // demo structure variable declared

    // 5. A pointer to a class/struct uses ‘->'(arrow operator) to access it’s members whereas a reference uses a ‘.'(dot operator)

    // var_p.a = 108;   ❌❌
    var_p->a =108;

    var_ref.a = 216;
    // var_ref->a = 216;   ❌❌



    // 6. A pointer needs to be dereferenced with * to access the memory location it points to, whereas a reference can be used directly.
    cout<< "\nIt will print the address,  p : " << p << endl;
    cout<< "It will print the value,  r : " << ref << endl;


    cout<<"\n\n";
}