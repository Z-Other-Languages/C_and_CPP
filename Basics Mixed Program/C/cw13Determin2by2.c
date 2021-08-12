// Determinant of Matrix 
#include<stdio.h>
int main(){

    int array[2][2], i, j;
    long determinant;
    printf("\n\nEnter the elements of Matrix :  \n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nThe matrix is \n");
    for (i=0; i<2; i++)
    {
        printf("\n");
        for (j=0; j<2; j++)
        {
            printf("%d\t", array[i][j]);
        }
    }

    // for determinant
    determinant = array[0][0]*array[1][1]   -   array[0][1]*array[1][0];
    printf("\n\nDeterminant of Matrix is : %ld \n\n", determinant);
}