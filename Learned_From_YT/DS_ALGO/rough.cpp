#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n) 
{
    int temp;
    for(int i=0; i<n; i++)  // for number of passes
    {
        cout << "Working on Pass Number " << i+1 << endl;

        for(int j=0; j<n-i-1; j++) // for comparison in each passes
        {
            if(arr[j] > arr[j+1] )
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }

}


int main() {
    int arr[] = {1, 55, 12, 16, 9, 125, 36};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout<< endl << size << endl;

}