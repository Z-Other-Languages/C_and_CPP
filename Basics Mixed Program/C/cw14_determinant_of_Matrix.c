// Determinant of matrix of any order
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){

    int a[100][100]; // here 'a' refers to the matrix
    int i, j, k, n, rest;
    printf("\n\nEnter the order of the Square matrix : \n");
    scanf("%d", &n);
    printf("Enter the elements of the matrix one by one : \n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%4d \t", a[i][j]);
        }
        printf("\n");
    }
    
    rest = det(a, n);
    printf("%d", rest);
}

int det(int a[100][100], int n){

    int Minor[100][100];
    int i, j, k, c1, c2;
    int determinant;
    int c[100];
    int o=1;

    if (n==2)
    {
        determinant=0;
        determinant = ( a[0][0]*a[1][1] ) - ( a[0][1]*a[1][0] );
        return determinant;
    }

    else    // when order is greater than 2
    {
        for (i=0; i<n; i++)
        {
            c1=0; c2=0;
            for (j=0; j<n; j++)
            {
                for (k=0; k<n; k++)
                {
                    if (j!=0 && k!=1)
                    {
                        Minor[c1][c2] = a[j][k];
                        c2++;
                        if (c2 > (n-2) ) 
                        {
                            c1++;   c2=0;
                        }
                    }
                }
            }
            determinant = determinant + o*( a[o][i]*det( Minor, n-1) );
            o = -1*o;
        }

    }
    return determinant;

}


/*

try 
{
    // statements
}
catch()
{
    // statements
}
catch()
{
    // statements
}
catch()
{
    // statements
}

*/
