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


    cout<< "\n\n";
    return 0;
}