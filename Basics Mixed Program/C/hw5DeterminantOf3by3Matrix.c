// Determinant of Matrix 
#include<stdio.h>
int main(){

    int array[3][3], i, j;
    long determinant;
    printf("\n\nEnter the elements of Matrix :  \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nThe matrix is \n");
    for (i=0; i<3; i++)
    {
        printf("\n");
        for (j=0; j<3; j++)
        {
            printf("%d\t", array[i][j]);
        }
    }

    // for determinant
    
    int x = (array[0][0])*((array[1][1]*array[2][2]) -  (array[1][2]*array[2][1]));
    int y = (array[0][1])*((array[1][0]*array[2][2]) -  (array[1][2]*array[2][0]));
    int z = (array[0][2])*((array[1][0]*array[2][1]) -  (array[1][1]*array[2][0]));
    int det = x-y+z;

    printf("\n\nDeterminant of Matrix is : %d \n\n", det);

    return 0;

}