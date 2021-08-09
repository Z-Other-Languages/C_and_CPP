// Subarray is a contiguous part of an Array
// Learn Printing subarry, max of subarray, Kadane's Algorithm for finding max of subarray

// #include<bits/stdc++.h>
#include <iostream>  
#include <climits>

using namespace std;

void print_all_sub_array(int arr[], int n)
{
     // subarry code is below
    for (int i=0; i<n; i++)     // This is brut force approach bcoz time complexity is large.
    {
        for (int j=i; j<n; j++)
        {
            for (int k=i; k<=j; k++)
            {
                cout<< arr[k]<< " ";
            }
            cout<< endl;
        }
    }

}

void max_sum_of_subArray_eg_1(int arr[], int n)
{
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++)  // Brut force approach, Large time complexity.
    {
        for (int j=i; j<n; j++)
        {
            int sum=0;
            for (int k=i; k<=j; k++)
            {
                sum += arr[k];
            }

            maxSum = max(maxSum, sum);
        }
    } 

    cout<< "Maximum sum of the SubArray is : " << maxSum;
}

void max_sum_of_subArray_eg_2(int arr[], int n)
{

    int currSum[n+1];
    currSum[0] = 0;

    for (int i=1; i<=n; i++)
    {
        currSum[i] = currSum[i-1] + arr[i-1];
    }
    cout<< "Total Current Sum of Array is : " << currSum[n] <<endl;

    int maxSum = INT_MIN;

    for (int i=1; i<=n; i++)
    {
        int sum = 0;
        for (int j=0; j<i; j++)
        {
            sum = currSum[i] - currSum[j];
            maxSum = max(sum, maxSum);
        }
    }

    cout<< "Maximum Sum of SubArray is : " << maxSum;
}
void max_sum_of_subArray_eg_best(int arr[], int n)  // Best example Kadane's Sum
{
    int currentSum = 0;
    int maxSum = 0;

    for (int i=0; i<n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }

    cout<< "Kadane's Algorithm, Max Sum of SubArray : "<< maxSum << endl;
}



int main()
{
    // taking array input
    int n;
    cout<< "Enter the Size of the Array : ";
    cin>> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>> arr[i];
    }

    // print_all_sub_array(arr, n);
    // max_sum_of_subArray_eg_2(arr, n);
    // max_sum_of_subArray_eg_2(arr, n);
    max_sum_of_subArray_eg_best(arr, n);  // kadane's Algorithm


   
}
