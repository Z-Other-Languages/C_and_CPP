// Sorting of Array using Insertion Sort
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    cout<< "Enter the size of Array : ";
    int n;
    cin>> n;
    cout<< "Enter the Elements of Array : ";

    int arr[n];
    // Taking inputs for array
    for (int i=0; i<n; i++)
    {
        cin>> arr[i];
    }

    // Sorting of Array using Inserting Sort
    for (int i=1; i<n; i++)
    {
        int current = arr[i];
        int j = i-1;

        while(arr[j] > current  &&  j>=0 )
        {
            
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }


    // Printing Array
    for (int i=0; i<n; i++)
    {
        cout<< arr[i] << " ";
    }
}
