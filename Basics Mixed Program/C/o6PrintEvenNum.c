// print even number and odd number from 1 to n
#include<stdio.h>
int main()  {

    int n, i;
    printf("Enter the Last value, n = ");
    scanf("%d", &n);

    printf("EVEN      ODD\n");

    for (i=1; i<=n; i++)
    {    if(i%2==0)
        printf("%2d\n", i);
        else
        {
            printf("   %10d\n", i);
        }
        
    }
    return 0;
}