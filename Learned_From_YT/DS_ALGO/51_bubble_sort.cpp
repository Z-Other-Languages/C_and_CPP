// Bubble sort in not already adaptive

#include <iostream>
using namespace std;

void display(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
    cout<< arr[i] << " " ;
    }
    cout<< endl;
}

void bubbleSort(int *arr, int n)
{
    int temp;
    for(int i=0; i<n; i++)  // for number of passes
    {
        cout<< "Working on Pass Number "  << i+1 << endl;
        
        for(int j=0; j<n-i-1; j++)  // for comparison in each passes
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
      
    }
}

void bubbleSortAdaptive(int *arr, int n)
{
    int temp;
    int isSorted = 0;
    for(int i=0; i<n; i++)  // for number of passes
    {
        cout<< "Working on Pass Number "  << i+1 << endl;
        isSorted = 1;
        for(int j=0; j<n-i-1; j++)  // for comparison in each passes
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted)
        {
            return;  
        }
    }
}

int main()
{
    // int arr[] = {12, 5, 44, 9, 20, 99, 48};
    int arr[] = {1, 2, 325, 40, 15, 18, 7};
    // int arr[] = {1, 2, 5, 9, 150, 180, 27};
    int size = 7;

    display(arr, size);

    bubbleSort(arr, size);

    display(arr, size);

    return 0;
}