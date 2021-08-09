// Maximum and minimum value of an array
// #include <bits/stdc++.h>
#include <iostream>
#include <climits>
using namespace std;


int main(){
    int arr[] = {11, 89,23,5,75};
    // int n = length(arr);
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout<< n;

    int maximum = INT_MIN;
    int minimum = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, arr[i]);
        minimum = min(minimum, arr[i]);
    }

    cout<< maximum << "\n" << minimum;
    



}
