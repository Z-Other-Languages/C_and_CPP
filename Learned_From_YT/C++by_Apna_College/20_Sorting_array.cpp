// Sorting of array using Selection Sort
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the Size of Array : ";
    int n;
    cin>> n;
    int arr[n];
    cout << "Enter the Elements of Array : ";

    // Taking array input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sorting Array
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout<< "Sorted Array is : ";
    // Printing all sorted array
    for (int i=0; i<n; i++)
    {
        cout<< arr[i] << " ";
    }
}