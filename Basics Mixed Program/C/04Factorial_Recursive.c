#include<stdio.h>

int factorial (int num)
{
    
    if (num==0 || num==1)
    {
        return 1;
    }
    else
    {
       int y = (num * factorial(num-1));
        return y;
    }
}

int main()
{

    printf("Enter the number to find factorial : ");
    int x;
    scanf("%d", &x);
    printf("Factorial of %d is : %d", x, factorial(x));
}