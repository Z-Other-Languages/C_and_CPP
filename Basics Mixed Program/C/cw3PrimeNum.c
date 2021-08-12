// for prime number
#include<stdio.h>
int main() {

    int n, i, flag=0;
    printf("\n\n*** To check for Prime Number ***");
    printf("\n\nEnter Your Integer : ");
    scanf("%d", &n);

    for (i=2; i<=n/2; ++i)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (n==1)
    {
        printf("1 is neither prime nor composite");
    }
    else
    {
        if (flag == 0)
        printf("\n%d is a Prime Number \n\n", n);
        else
        printf("\n%d is not a Prime Number \n\n", n);
    }

    return 0;

}