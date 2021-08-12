#include<stdio.h>
int main(){

    int m, n, p, q, sum =0, i, j, k;
    printf("\n\nEnter the Number of Rows & column of First Martix : \n");
    scanf("%d \n%d", &m, &n);
    printf("\nEnter the Elements of First Matrix :- \n");
    
    int array1[m][n];
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("\n\nEnter the number of row and column of Second matrix : \n");
    scanf("%d \n%d", &p, &q);
    int array2[p][q];
    printf("\nEnter the Elements of Second Matrix : \n");
    for (i=0; i<p; i++)
    {
        for (j=0; j<q; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }


    printf("\nMultiply of the Matrix :- \n");
    int mult[m][q];
    for (i=0; i<p; i++)
    {
        for (j=0; j<q; j++)
        {
            mult[i][j]=0;
            for (k=0; k<q; k++)
            mult[i][j] += array1[i][k] * array2[k][j];
        }
    }
    
    // for printing result
    for (i=0; i<p; i++)
    {
        for (j=0; j<q; j++)
        {
            printf("%d\t", mult[i][j]);
        }
        printf("\n");
    }
    
    return 0;
    



}