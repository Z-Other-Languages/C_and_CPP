#include <stdio.h>

int factorial(int num)
{
    if(num == 1 || num == 0)
    {
        return 1;
    }
    
    else{
        int y = (num * factorial(num - 1));
        return y;
    }
}

int main()
{
    printf("Hello World\n");
    printf("Enter the Number to find Factorial : ");
    int x;
    scanf("%d", &x);
    printf("The Factorial of %d is    %d", x, factorial(x) );
    return 0;
}