// Linear Search and Binary Search
#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int element)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == element){
            return i;
        }
    }
    return -2;
}

int binarySearch(int arr[], int size, int element){
    int low_index = 0, high_index = size-1;

    while (low_index <= high_index)
    {
        int mid = (low_index + high_index)/2;
        
        if(arr[mid] == element)
        {
            return mid;
        }
        if(arr[mid] < element)
        {
            low_index = mid +1;
        }
        if(arr[mid] > element)
        {
            high_index = mid - 1;
        }
    }

    return -2;
    
}

int main()
{
    /*
    int arr[] = {25, 6, 89, 45, 12, 4, 54, 3, 41, 5};
    int size = sizeof(arr)/sizeof(int);

    int element = 22;
    int searchIndex = linearSearch(arr, size, element);
    cout<< "Element "<< element << " found at Position " << searchIndex+1 << endl;
    */


    // Sorted array for binary search
    int arr[] = {2, 4, 8, 22, 44, 50, 54, 57, 95, 112,225, 350, 516, 606};
    int size = sizeof(arr)/sizeof(int);
    int element = 8;
    int searchIndex = binarySearch(arr, size, element);
    cout<< endl << "Element " << element << " found at Position : " << searchIndex+1 << endl;

    return 0;

}