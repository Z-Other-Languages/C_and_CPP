// Searching of element in Array
// For Binary search must give the array in the ascending order
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int linear_search(int n, int arr[], int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            key = i;
        }
    }

    return i;
}

int binarySearch(int n, int arr[], int key)
{
    int start = 0; // s means starting
    int end = n;   // e means ending

    while (start <=end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key) // This means key is present in first halt
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the Size of Array : ";
    cin >> n;
    cout << "Enter the Element of Array : \n";

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the Key for Searching : ";
    cin >> key;
    cout << "Your Element is at Index : ";
    // cout<< linear_search(n, arr, key);
    cout << binarySearch(n, arr, key);

    return 0;
}