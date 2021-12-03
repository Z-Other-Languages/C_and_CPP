#include<iostream>
#include<string.h>
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
    char str_in[50], rev[50];
    cout<< "Enter the String : ";
    cin>> str_in;
    // rev = str_in;
    
    strcpy(rev,  str_in);
    strrev(rev);

    /* 
    Here difference word is used bcoz strcmp (string compare)
    string is converted into ASCII Code and then subtracted
    and if the string and reverse string are same then difference is 0

    Different String then it will retrun non zero value
    */
    
    int difference;
    difference = strcmp(rev, str_in);    // If they are equal then value is  zero

    cout<< difference << endl;
    
}

int main()
{
    // palindrome_simple();
    palindrome_string();
}