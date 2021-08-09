#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
void learn_string()
{
    cout<< 'a' - 'A' << endl;

    cout<< 'a' - 'b' << endl;

    // CONVERT TO UPPER CASE CHARACTER
    string str = "abcdefghijklmnopqrstuvwxyz";
    for (int i=0; i< str.length(); i++)
    {
        // if (str[i] >= 'a' && str[i] <= 'z' )
        // str[i] -= 32; 
        
    }

    // cout<< str << endl;

    // CONVERT TO LOWER CASE CHARACTER
    for (int i=0; i<str.length(); i++)
    {
        if (str[i] >= 'A' &&  str[i]<= 'Z')
        {
            str[i] += 32;
        }
    }
    // cout<< str <<endl;


    // ALTERNATE METHOD TO PRINT UPPER CASE
    transform(str.begin(), str.end(), str.begin(), :: toupper );
    transform(str.begin(), str.end(), str.begin(), :: tolower );

    cout<< str;

}

void formTheBiggestNumber()
{
      string s = "489597021";

      sort(s.begin(), s.end(), greater<int>() );
      
      cout<< s << endl;
}

void coutTHEcharacterINaSENTENCE()
{
    string s = "fayubbbbbbaengpiionaeni";

    int freq[26];

    for (int i=0; i<26; i++)
        freq[i] = 0;

    for (int i=0; i<s.size(); i++)
     {   
         freq[s[i]-'a']++;      // this is used because a-a=0, b-a=1, c-a=2
                                // it will increase freq count repeating character
        
     }
    char ans = 'a';
    int maxF = 0;

    for (int i=0; i<26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }

    cout<< maxF << " " << ans << endl;

}

int main()
{
    
    // learn_string();
    // formTheBiggestNumber();
    coutTHEcharacterINaSENTENCE();
}