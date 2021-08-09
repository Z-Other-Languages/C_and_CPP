#include <stdio.h>
int main()
{
    // int* a, b;

    typedef int* intPointer;
    intPointer a,b;

    int c;
    a = &c;
    b = &c;



    // typedef <previous_name> <alias_name>;
    
    // typedef unsigned long ul;
    // typedef int integer;

    // ul l1, l2, l3;
    // integer a= 4;
    // printf("The Value of a : %d", a);
    return 0;
}