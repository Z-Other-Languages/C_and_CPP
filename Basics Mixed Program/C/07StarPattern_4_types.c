#include <stdio.h>

void equilateral_triangle(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf(" ");
        }

        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void inverted_equilateral_triangle(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }

        for (int k = n; k >= i; k--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void rt_triangle(int num)
{

    for (int i = 0; i <= num; i++)
    {
        for (int j = num; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void inverted_rt_triangle(int num)
{

    for (int i = 0; i <= num; i++)
    {
        for (int j = num; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}



int main()
{
    printf("\nEnter the Number of Rows : ");
    int r;
    scanf("%d", &r);
    // rt_triangle(r);
    // equilateral_triangle(r);
    // inverted_equilateral_triangle(r);
    inverted_rt_triangle(r);

    return 0;
}