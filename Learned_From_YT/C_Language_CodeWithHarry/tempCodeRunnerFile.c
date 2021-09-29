#include <stdio.h>

int changeValue(int *address)
{
    *address = 566;
}

int main()
{
    int a= 44;
    printf("Initial Value of a is : %d \n", a);

    changeValue(&a);

    printf("Final Value of a is : %d", a);

    return 0;
}