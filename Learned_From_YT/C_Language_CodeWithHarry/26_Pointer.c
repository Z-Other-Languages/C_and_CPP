#include <stdio.h>

void ptrfunc(int *ptr)
{
    *ptr = 8;
}


int main()
{
    int x =99;
    int *a = &x;

    printf("\n\n %d ", &x);
    printf("\n %d \n", a);

    printf("\n\n %d \n", &a);

    printf(":::::::::::::::::::::::\n\n");

    printf("x = %d \n", x);
    printf(&x);
    printf("x = %d", x);

   return 0;

}