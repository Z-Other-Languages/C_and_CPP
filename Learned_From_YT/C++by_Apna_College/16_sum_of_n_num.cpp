// Sum of n number of terms
// Pythagorean Triplet
// Binary to Decimal Conversion

#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int sum(int n)
{
    int ans =0;

    for (int i=1; i<=n; i++)
    {
        ans = ans +i;
    }

    return ans;
}

bool check(int x, int y, int z)
{
    int a = max(x, max(y,z));
    int b, c;

    if (a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b= x;
        c= y;
    }

    if(a*a == (b*b + c*c) )
    {
        return true;
    }
    else{
        return false;
    }
}

int binaryToDecimal(int n){
    int ans =0;
    int x= 1;  // this is 2 raised to the power 0 initially
                // then on increasing power 2 in next term

    while (n>0){
        int lastDigit = n%10;
        ans += lastDigit * x; // last digit * 2 raised to power 0,1,2,3,.. 
        x *= 2;
        n = n/10;
    }

    return ans;
}

int octalToDecimal(int n){
    int ans =0;
    int x= 1;  // this is 2 raised to the power 0 initially
                // then on increasing power 2 in next term

    while (n>0){
        int lastDigit = n%10;
        ans += lastDigit * x; // last digit * 2 raised to power 0,1,2,3,.. 
        x *= 8;
        n = n/10;
    }

    return ans;
}

int hexaDecimalToDecimal(string s){
    int ans=0;
    int x=1;

    int size = s.size();

    for (int i=size-1; i>=0; i--)
    {
        if(s[i] >= '0' && s[i]<= '9')
        {
            ans += x* (s[i] - '0');
        }
        else if (s[i] >= 'A' && s[i] <= 'F')
        {
            ans += x* (s[i] - 'A' + 10);
        }
        
        x *= 16;
    }

    return ans;
}

int decimalToBinary(int n){
    int x= 1;
    int ans = 0;
    while (x<=n){
        x *= 2;
    }
        x /= 2;

    while(x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 2;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

int main(){
    int n;
    cout<< "Enter a Number : ";
    cin>> n;
    // cout<< sum(n);


    // For Pythagorean Triplet Code is Below
    // int x, y, z;
    // cin >> x >> y >> z;

    // if (check(x,y,z))
    // {
    //     cout<< "Pythagorean Triplet";
    // }
    // else
    // {
    //     cout<< "Not a Pythagorean Triplet";
    // }



    // Binary to Decimal
    // cout<< binaryToDecimal(n) << endl;
    // cout<< octalToDecimal(n) << endl;

    
    // string s;
    // cin>> s;
    // cout<< hexaDecimalToDecimal(s) << endl;
    
    
    cout<< decimalToBinary(n) << endl;
}