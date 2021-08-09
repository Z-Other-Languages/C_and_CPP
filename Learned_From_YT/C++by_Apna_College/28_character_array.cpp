#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void print_string()
{
    char arr[100] = "apple";
    int i = 0;

    while (arr[i] != '\0')
    {
        cout << arr[i] << endl;
        i++;
    }
}

void input_string()
{
    char arr[100];
    cin >> arr;

    cout << arr;
}

void palindrome()
{
    int n;
    cin >> n;
    char ch[n+1];
    cin >> ch;
    // int y = lengthof(str);

    bool flag = 1;

    for (int i = 0; i < n; i++)
    {
        if (ch[i] != ch[n - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        cout << "Palindrome Word";
    }
    else
        cout << "Not a Palindrome Word";

    // cout << sizeof(ch) << endl;
    // cout<< (sizeof(ch))/4 - 1;
}

void largest_word_in_a_sentence()
{
    int n; 
    cin>> n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr, n);
    cin.ignore();

    int i=0;
    int currLen = 0, maxLen = 0;
    int st =0, maxst=0;     // starting and max starting

    while(1)
    {
        if(arr[i] == ' ' || arr[i] == '\0' )
        {
            if(currLen > maxLen)
            {
                maxLen = currLen;
                maxst = st;
            }
            currLen = 0;
            st = i+1;
        }

        else
            currLen++;

        if(arr[i] == '\0')
            break;

        i++;
    }

    cout<< maxLen << endl;
    
    for(int i=0; i<maxLen; i++)
        cout<< arr[i + maxst];

}

int main()
{
    // input_string();
    // palindrome();
    largest_word_in_a_sentence();

}