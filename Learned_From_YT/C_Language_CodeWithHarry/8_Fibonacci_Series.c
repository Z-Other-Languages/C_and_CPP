
#include <stdio.h>

int fib_recursive(int n)
{    
    if (n==1 || n==2)
    {    
        return n-1;
    }

    else
    {
        return fib_recursive(n-1) + fib_recursive(n-2);
    }
}

int fib_iterative(int n)
{
    int a =0, b =1;
    
    for(int i =0; i<n-1; i++)
    {
        b = a+b; 
        a = b-a;

        
    }

    return a;
}

int main()
{
    printf("\nEnter the Position of Fibonacci Series to get a Particular Value : ");
    int num;
    scanf("%d", &num);
    printf("\nThe Value of Fibonacci Series at %d Position is :  %d, using Iterative Approach.", num, fib_iterative(num));

    printf("\nThe Value of Fibonacci Series at %d Position is :  %d, using Recursive Approach.\n\n", num, fib_recursive(num));
    return 0;
}
