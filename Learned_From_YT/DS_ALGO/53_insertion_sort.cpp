/*
    Total Passes = n - 1
    Total Comparison = 1+2+3+4+5 + ... + (n-1) = n(n-1)/2 = Big O of n square ~ WORST CASE
    BEST CASE = O(n)
    Stable = Yes, because equal element come with respective position No Partially is seen for first come first serve.
    Adaptive = Yes, Because one part is already sorted

*/

#include<iostream>
using namespace std;

void display(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
    cout<< arr[i] << " " ;
    }
    cout<< endl;
}

void insertionSort(int *arr, int n)
{
    int key;

    for(int i=0; i <= n-1; i++) // loop for passes
    {
        key = arr[i];   
        // harry used j but i haven't used it for my convinence
        
        while (i>=1 && arr[i-1] > key)  // loop for each passes
        {
            arr[i] = arr[i-1];
            i--;
        }

        arr[i] = key;
    }
}

int main()
{
    int arr[] = {12, 5, 44, 9, 20, 99, 48};
    // int arr[] = {1, 2, 325, 40, 15, 18, 7};
    // int arr[] = {1, 2, 5, 9, 150, 180, 27};
 
    int size = 7;

    display(arr, size);

    insertionSort(arr, size);

    display(arr, size);

}