// Printing Star Pattern

#include <stdio.h>
int main()
{
    int num, i, j;

    printf("\nEnter the Height of the Star Pattern : ");
    scanf("%d", &num);

    // RIGHT ANGLED TRIANGLE
    for (i = 0; i < num; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");

    // INVERTED RIGHT ANGLED TRIANGLE
    for (i = 0; i <= num; i++)
    {
        for (j = num; j >= i; j--)
        {
            printf("* ");
        }

        printf("\n");
    }
    printf("\n\n");

    // EQUILATERAL TRIANGLE
    for (i = 0; i < num; i++)
    {
        for (j = num; j >= i; j--)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
 printf("\n\n");

    // Inverted Equilateral Triangle
    for(i=0; i<num; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf(" ");
        }

        for(j=num; j>i; j--)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}