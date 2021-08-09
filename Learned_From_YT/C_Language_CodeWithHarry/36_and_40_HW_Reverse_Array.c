// REVERSE ARRAY NUMBERS by simple method and swapping method
#include<stdio.h>


void rev_array(int arr[], int n)
{
    // REVERSING FROM BASICS
    // for (int i=n; i>=0; i--)
    // {
    //     printf("%d ", arr[i]);
    // }

    
    // REVERSING BY SWAPPING
    for (int i=0; i<n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i];
        arr[n-i] = temp;
    }
}

void print_array(int num_arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
    printf("%d ", num_arr[i]);        
    }
} 

int main()
{
    int num_arr[] = {15, 30, 45, 60, 75, 90, 105};
    int n = sizeof(num_arr)/sizeof(num_arr[0]);
    printf("Original Array is : ");
    print_array(num_arr, n);

    
    rev_array(num_arr, (n-1));
    printf("\n\nReversed Array is : ");
    print_array(num_arr, n);
    
    
}