#include<iostream>
using namespace std;

int main()
{
    char ch = 'A';
    char ch_arr[10];

    for(int i=0; i<10; i++)
    {
        ch_arr[i] = ch + i;
    }

    for(int i=0; i<10; i++)
    {
        cout<< ch_arr[i] << " ";
    }
}