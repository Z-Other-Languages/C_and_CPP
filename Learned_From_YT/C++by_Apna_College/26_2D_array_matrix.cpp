// 2D array,   Linear Spiral order print of 2D matrix

#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;

void matrix()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];

    // taking matrix element as input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void spiral()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    // taking matrix element as input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    // Spiral Order Print Code is below :-

    int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;

    while (row_start <= row_end && column_start <= column_end)
    {
        // for row_start i.e, top row
        for (int col = column_start; col <= column_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        // column_end i.e, right column
        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][column_end] << " ";
        }
        column_end--;

        // row_end i.e, bottom row
        for (int col = column_end; col >= column_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }
        row_end--;

        // column_start i.e, starting row
        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][column_start] << " ";
        }
        column_start++;
    }

    // for printing linear spiral order of 2D Matrix
    // for (int i=0; i<n; i++)
    // {
    //     cout<<
    // }
}

int main()
{
    // matrix();
    spiral();
}
