#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void display(int A[], int size)
{
    cout << "\nElements after Quick Sort : ";
    cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << " ]";
}

int partition(int A[], int low, int high)
{
//     A[0]    A[1]    A[2]    A[3]    A[4]
//       |       |                       |
//     pivot   low                     high
//    A[low]    i                       j

    int pivot = A[low];
    int i = low + 1;   
    int j = high;      


    while (true)
    {
        while (i <= j && A[i] <= pivot)
        {
            i++;        // if 'i' will satisfy the CONDITION then INCREMENT it
        }
        while (A[j] >= pivot && j >= i)
        {
            j--;        // if 'j' will satisfy the CONDITION then DECREMENT it
        }

        if (j < i)
        {
            break;
        }
        else
        {
            // Pass by Pointer 👇
            swap(&A[i], &A[j]);     // IF both i & j are stopped then Replace them
        }
    }

    // 👇 Swap the  pivot element   &   HIGH
    //             A[low] or A[0]       A[j]
    swap(&A[low], &A[j]);   
    return j;   // j can also called as partition index
}

//arr[] --> Array to be sorted,    low  --> Starting index,   high  --> Ending index
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // pi is partitioning index, arr[pi] is now  at right place
        int pi = partition(arr, low, high);

        // Separately sort elements before / partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int size = 5;
    int A[5];

    cout << "Enter the Element of Array : \n";
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }


    // 👇 Parameters : Array to be Sorted, starting index, ending index
    quickSort(A, 0, 4);

    display(A, size);
}