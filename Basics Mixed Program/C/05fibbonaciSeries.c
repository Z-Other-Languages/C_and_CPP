#include<stdio.h>

int fib(int n)
{
    
    if (n==1 || n==2)
    {
        return n-1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}

int main()
{
    printf("\n\nEnter the Position of Fibbonaci Series : ");
    int a;
    scanf("%d", &a);
    printf("Fibonacci Series at Position %d is : %d", a, fib(a));
}