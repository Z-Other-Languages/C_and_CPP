#include<stdio.h>
int main(){

    printf("\n\n**** Multiplication Table Program **** \n\n");
    printf("Enter any Positive Integer : ");
    int n, i, p;
    scanf("%d", &n);
    printf("\n\nMultiplication Table of %d is \n", n);
    
    for (i=1; i<11; ++i)
    {
    p = n*i;
    printf("%d * %d = %d", n, i, p);
    printf("\n");
    }

    return 0;
}