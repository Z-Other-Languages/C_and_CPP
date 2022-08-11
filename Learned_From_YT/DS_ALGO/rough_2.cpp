// #include<bits/stdc++.h>
// #include <bits/stdc++>
#include <iostream>
using namespace std;

int partition(int a[], int p, int q)
{
    // a-> array
    // p-> lower index
    // q-> higher index

    int pivot = a[p];
    do
    {
        do
        {
            p++;
        } while (a[p] <= pivot);
        do
        {
            q--;
        } while (a[q] > pivot);

        swap(a[p], a[q]);
        // int temp1 = a[p];
        // a[p]=a[q];
        // a[q]=temp1;
    } while (p < q);

    swap(a[q], a[p]);
    // a[p] = a[q];
    // a[q] = pivot;

    return q;
}

void QuickSort(int a[], int p, int q)
{
    if (p < q)
    {
        int j = partition(a, p, q + 1);
        QuickSort(a, p, j);
        QuickSort(a, j + 1, q);
    }
}

int main()
{
    int n = 7;
    int a[7] = {10, 2, 43, 23, 445, 9, 8};
    int h = sizeof(a) / sizeof(a[0]);
    QuickSort(a, 0, n);
    cout << "QuickSort DONE!";
    for (int i = 0; i < h; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
