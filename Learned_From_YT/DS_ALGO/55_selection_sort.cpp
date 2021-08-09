/*
    Total Number of Passes = n - 1
    Total Possible Comparison = 1+2+3+4+5 + ... + (n-1) = n(n-1)/2 = Big O of n square ~ WORST CASE
    Max swaps = n-1
    Stable = NO, because each equal element is replaced by any further smaller element
    Adaptive = NO, Because each time we have to make comparison again & again for the starting element to end.

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

void selectionSort(int *arr, int n)
{
   int indexOfMin, temp;
   cout<< "Running Selection Sort : \n";

    for(int i=0; i < n-1; i++)  // Number of passes
    {
        indexOfMin = i;
        for(int j = i+1; j < n; j++) // Number of comparison in each passes
        {
            if(arr[j] < arr[indexOfMin])
            {
                indexOfMin = j; // if any next element is smallest then is stored at minimum index
            }
        }

        // swapping the smallest number and bringing it to the minimum index
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;

    }

}

int main()
{
    int arr[] = {12, 5, 44, 9, 20, 99, 48};
    // int arr[] = {1, 2, 325, 40, 15, 18, 7};
    // int arr[] = {1, 2, 5, 9, 150, 180, 27};
 
    int size = 7;

    display(arr, size);

    selectionSort(arr, size);

    display(arr, size);

}