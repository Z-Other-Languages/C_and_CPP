// Equilateral Triangle Pattern
#include<stdio.h>
int main()  {

    int rows, i, j;
    printf("\n\nEnter the Number of Rows : ");    // number of rows
    scanf("%d", &rows);
    // loop to iterate the number of rows
    for (i=1; i<=rows; i++)
    {
        // loop to print the number of space before the stars
        for (j=rows; j>=i; j--)
       {
            printf(" ");   
       }

       // loop to print the number of stars in each rows
        for (j=1; j<=i; j++)
        {
            printf("* ");
        }

        // for new line after printing each row
        printf("\n");
    
    }
	
    return 0;

}
