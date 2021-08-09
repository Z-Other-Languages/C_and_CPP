#include <stdio.h>

int a = 100;

int b = 34;

int func1(int b1)
{
    static int myvar = 98;   // ONLY ONE TIME READ BY THE COMPILER
    printf("\nThe Value of myvar is %d", myvar);
    myvar++;
    return b1 + myvar;

    // printf("\nThe Value of b inside func1 is : %d", b);
    // printf("\nThe address of b inside func1 is : %d \n", &b);
    // return b1*10;
}

int main()
{
    


    // printf("\nNumber is : %d", a);
    int b = 100;
    // printf("\n\nThe address of b inside main is : %d \n", &b);

    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    

    
    int* ptr = &val;

    printf("\nThe Value of func1 is :  %d ", val);

    // printf("The Value of func1 is : %d\n\n", func1());
}
