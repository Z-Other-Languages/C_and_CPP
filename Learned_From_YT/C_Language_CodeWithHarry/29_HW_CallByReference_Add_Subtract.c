#include <stdio.h>

int add_sub(int *a, int *b)
{
    *a = *a+*b;
    *b = (*b) - (*a - *b);
}

int main()
{
    int a= 12, b = 16;

    printf("INITIALLY, Value of a : %d and Value of b is : %d", a, b);

    add_sub(&a, &b);
    printf("\nFINALLY, Value of a : %d and Value of b is : %d", a, b);
    
    return 0;
}