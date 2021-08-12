// sparse Matrix
#include<stdio.h>
int main(){

    static int array1[10][10];
    int i, j, m, n;
    int counter =0;
    printf("\n\nEnter the order of the matrix : \n");
    scanf("%d%d", &m, &n);

    printf("Enter the co-effiecient of the matrix : \n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d", &array1[i][j]);

            if (array1[i][j] == 0)
            {
                ++counter;
            }
        }
    }

    if (counter > (m*n)/2)
    printf("Above matrix is a sparse matrix ");
    else
    {
        printf("Not a sparse matrix !!");
    }
    
    printf("\nThere are %d zeros in the matrix \n\n", counter);
    return 0;

}