// Given an array of integers and a positive integer k , determine the number of (i,j) pairs where i<j  and ar[i] + ar[j] is divisible by k.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void cp1()
{
    int n;
    cin >> n;
    int arr[n];
  

    // taking input array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sum of two numbers be k
    int k;
    cin>> k;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ( (arr[i] + arr[j]) % k == 0)
            {
                cout<< arr[i] << "," << arr[j] << endl;
            }

            
        }
    }
}

int main()
{
    cp1();
}