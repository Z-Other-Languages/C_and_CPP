#include <stdio.h>

void right_triangle(int r)
{
    for (int i = 0; i <= r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void equilateral_triangle(int r)
{
    for (int i = 0; i <= r; i++)
    {
        for (int j = r; j >= i; j--)
        {
            printf(" ");
        }
        for (int z = 0; z < i; z++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void inverted_equilateral_triangle(int r)
{
    for (int i = 0; i <= r; i++)
    {
        for (int j = r; j >= i; j--)
        {
            printf("* ");
        }

        printf("\n");

        for (int z = 0; z <= i; z++)
        {
            printf(" ");
        }
    }
}

void inverted_right_triangle(int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = r; j > i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("\nEnter the Number of Rows of Stars : ");
    scanf("%d", &rows);

    // equilateral_triangle(rows);
    // printf("\n");

    // inverted_equilateral_triangle(rows);
    // printf("\n");

    // right_triangle(rows);
    // inverted_right_triangle(rows);

    // FOR ASKING TYPE OF TRIANGLE FROM THE USER
    printf("\n1. For Equilateral Triangle. \n2. For Inverted Equilateral Triangle. \n3. For Right Triangle. \n4. For Inverted Right Triangle.\n\n");
    printf("Enter the Type of Triangle : ");
    int opt;
    scanf("%d", &opt);
    printf("\n");
    switch (opt)
    {
    case 1:
        equilateral_triangle(rows);
        break;

    case 2:
        inverted_equilateral_triangle(rows);
        break;

    case 3:
        right_triangle(rows);
        break;

    case 4:
        inverted_right_triangle(rows);
        break;

    default:
        printf("\nPlease, Enter a Valid Entry !! \nEquilateral Triangle Auto Selected.");
        equilateral_triangle(rows);
        break;
    }

    return 0;
}