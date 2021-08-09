#include<stdio.h>
int main()
{
    printf("Pointer Basics\n");

    int a =76;
    int *ptra = &a;
    int *ptr2 = NULL;

    printf("The Address of 'a' Pointer is %p \n", &ptra);
    printf("The Address of 'a' is %p \n", &a);
    printf("The Address of 'a'  is %p \n", ptra);
    printf("The Address of some garbage is %p \n\n", ptr2);

    printf("The Value of a is %d \n", a);
    printf("The Value of a is %d \n", *ptra);
    printf("The Value of a is %p \n\n", *ptra);
    
    printf("The Value of a is %d \n", ptra);
    printf("The Value of a is %x \n", ptra); // printing number in hexadecimal
    
    // printf("The Value of a is %d \n", *a );

    return 0;

}