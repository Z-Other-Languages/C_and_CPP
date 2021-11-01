#include<iostream>
using namespace std;


int main(){
    cout<< "\n\n";

    // Pointer initialized with NUL
    // Then request memory for the variable

    int *p = NULL;  // 🟣
    p = new int;

    // or 

    // Combine declaration of the pointer
    // and their assignment

    // int *p = new int;    // 🟣



    //🎯 🤷‍♀️ 1. Initialize memory : We can also initialize the memory using new operator 👇👇

    int *ptr = new int(28);
    float *ptr_1 = new float(12.5);

    cout<< sizeof(ptr) << endl;
    cout<< *ptr << endl;

    /*
    🎯  2. Allocate block of memory : new operator is also used to allocate a block(an array) of memory of type data-type.

    pointer-variable = new data-type[size];

    where size(a variable) specifies the number of elements in an array.

    👇 Example    */ 

    int *ptr_2 = new int[10];
    cout<< sizeof(ptr_2) << endl;

    /*  👆
        Dynamically allocates memory for 10 integers contiuously of type int and returns pointer to the first element of the sequence, which is assigned to ptr_2(a pointer).
        p[0] refers to first element, p[1] refers to second element and so on.
    */

    /* 🎯 Normal Array Declaration 🏹 v/s 🏹 Using new

        There is difference b/w declaring a normal array & allocating a block of memory using new.

        ✨ The most important difference is, normal arrays are deallocated by compiler (if array is local, then deallocated when function returns or completes).

        ✨ However, dynamically allocated arrays always remain there until either they are deallocated by programmer or program terminates.

    */

    int *ptr_comp = new(nothrow) int;    // ptr_compare abbreviation ❔🔴🔴❔
    // int *ptr_comp = new int();
    cout<< ptr_comp << endl;
    cout<< *ptr_comp << endl;
    if (!ptr_comp)
    {
        cout<< "\nMemory Allocation failed.\n";
    }


    /* .................................................................................
                    👇 🏹 delete operator 🏹 👇

    Since it is programmer's responsibility to deallocate dynamically allocated memory, programmers are provided delete operation by C++ Language.

    🎯 Syntax :

        Release memory pointed by pointer-variable
        delete pointer-variable;    ✅

        Here, pointer-variable is the pointer that points to the data object created by new.

        Examples 👇 */
        
        delete ptr_comp;
        delete ptr_2;

    /* 🎯 2. To free the dynamically allocated array pointed by pointer-variable 👇

        Release block of memory
        pointed by pointer-variable
        
        delete[] pointer variable;  ✅
        👇*/

        // It will free the entire array
        // pointed by p


    cout<< "\n\n";
    return 0;
}