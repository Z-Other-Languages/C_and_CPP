#include<iostream>
using namespace std;

void palindrome_simple()
{
    int num_original;
    cout<< "Enter the Number to check for Palindfrom : ";
    cin>> num_original;

    int num = num_original;
    int rev_num = 0;
    int remainder =0;

    while(num > 0)
    {
        remainder = num % 10;   // say digit or remainder
        num = num/10;
        rev_num = rev_num * 10 + remainder;
    }

    if(num_original == rev_num)
        cout<< num_original << " is Palindrome Number";
    else
        cout<< num_original << " is Not Palindrome Number";
}

void palindrome_string()
{
    
}

int main()
{
    // palindrome_simple();
    palindrome_string();
}