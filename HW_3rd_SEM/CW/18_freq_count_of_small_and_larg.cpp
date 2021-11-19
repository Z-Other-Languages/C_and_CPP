/*
    WAP to find out th smallest & largest number from an array with their frequency count.
*/

#include <iostream>
// #include <bits/stdc++.h>
using namespace std;


void frequency_count(int arr[])
{
    // frequency count of smallest & Largest Element
    int big=arr[0];
    int small=arr[0];
    int big_count =0, small_count=0;
    for(int i=0; i<4; i++)
    {
        if(arr[i+1] > big)
        {
            big = arr[i+1];
        }

        if(arr[i+1] < small)
        {
            small = arr[i+1];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if(arr[i] == big)
        {
            big_count++;
        }
        if(arr[i] == small)
        {
            small_count++;
        }
    }
    

    cout<< "\nLargest Number : " << big;
    cout<< "\nSmallest Number : " << small;

    cout<< "\nFrequncy count of Largest No  : " << big_count;
    cout<< "\nFrequncy count of Smallest No : " << small_count;
}

void frequency_count_method_2(int arr[])
{
    int freq_min = 1;
    int freq_max = 1;
    int min = arr[0], max = arr[0];

    for(int i=1 ; i<5; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            freq_min = 1;
        }
        else if(arr[i] == min)
            freq_min++;

        if(arr[i] > max)
        {
            max = arr[i];
            freq_max = 1;
        }
        else if(arr[i] == max)
            freq_max++;
    }

    cout<< "\nMaximum No is : "<< max << " its Frequecy -> " << freq_max;
    cout<< "\nMinimum No is : "<< min << " its Frequecy -> " << freq_min;
    
}

int main()
{
    int arr[5];
    cout<< "\nEnter the Element of Array : \n";

    for(int i=0; i<5; i++)
        cin>> arr[i];

    cout<< "\n[ ";

    for(int i=0; i<5; i++)
        cout<< arr[i] << " ";

    cout<< "]";


    // frequency_count(arr);

    frequency_count_method_2(arr);

    return 0;
}