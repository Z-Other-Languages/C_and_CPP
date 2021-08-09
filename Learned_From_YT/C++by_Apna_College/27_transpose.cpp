// Transpose of Matrix (by swapping upper right part of matrix)
// Multiplication of matrix

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void transpose()
{
    //
    int arr[3][3];

    // Taking array input
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cin>> arr[i][j];
        }
    }


    // Tranpose of Array code is below
    for (int i=0; i<3; i++)
    {
        for (int j=i; j<3; j++)
        {
            // swap
            int temp;
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Printing array code is below 
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<< arr[i][j] << " ";
        }
        cout<< endl;
    }

}

void matrix_multiplication()
{
    int n1, n2, n3;
    cin>> n1 >> n2;

    int matrix_1[n1][n2];
    // Taking array input
    for (int i=0; i<n1; i++)
    {
        for (int j=0; j<n2; j++)
        {
            cin>> matrix_1[i][j];
        }
    }

    cin>> n2 >> n3;
    int matrix_2[n2][n3];

    // Taking array input
    for (int i=0; i<n2; i++)
    {
        for (int j=0; j<n3; j++)
        {
            cin>> matrix_2[i][j];
        }
    }

    // declaring initial values of sum=0
    int ans[n1][n3];
    for (int i=0; i<n1; i++)
    {
        for (int j=0; j<n2; j++)
        {
            ans[i][j] = 0;
        }
    }



    // Product of matrix
    for (int i=0; i<n1; i++)
    {
        for (int j=0; j<n3; j++)
        {
            for (int k=0; k<n2; k++)
            ans[i][j] += (matrix_1[i][k] * matrix_2[k][j]);
        }
    }

    // Printing multiplied matrix
    for (int i=0; i<n1; i++)
    {
        for (int j=0; j<n3; j++)
        {
            cout<< ans[i][j] << " ";
        }
        cout<< endl;
    }

}

int main()
{
    // transpose();
    matrix_multiplication();
}