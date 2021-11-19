// Bubble sorting : The greatest element is shifted to the Extreme Left Right side

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<< "Enter the size of the array : ";
    cin>> size;
    
    int arr[size];
    cout<< "Enter the Elements of the array : ";
    for(int i=0; i<size; i++)
        cin>> arr[i];

    // Bubble Sorting
    int counter = 1;
    while(counter < size)
    {
        for(int i=0; i < size-counter; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }

    // Print the array 
    for(int i=0; i<size; i++)
        cout<< arr[i] << " ";

    return 0;
}