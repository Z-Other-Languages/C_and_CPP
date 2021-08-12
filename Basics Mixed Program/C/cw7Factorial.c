#include<stdio.h>
int main(){

    int n, i;
    unsigned long long fact=1;
    printf("\n\nFind Factorial !!!");
    printf("\n\nEnter a Positive Integer : ");
    scanf("%d", &n);

    if (n<0)    // show error if user enters a (-ve) number
    {
        printf("\nFactorial of Negative number does not exist !!");
    }
    else
    {
        for (i=1; i<=n; ++i)
        {
            fact*= i;
        }
        printf("\nFactorial of %d     =   %d \n\n", n, fact);
    }

    return 0;

}