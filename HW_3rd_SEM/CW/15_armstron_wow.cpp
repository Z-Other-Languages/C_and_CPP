/*
1634, 8208, 9474 are a few examples of a 4 digit armstrong number

*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num, count=0;
    int quot, rem, answer=0;

    cout<< "\n\nEnter the Number : ";
    cin>> num;

    int num_original = num;

    while(num!=0)
    {
        num = num/10;
        count += 1;
    }

    cout<< "The Value of counter : " << count;

    num = num_original;     // num is used as dynamic value keep changing

    while(num != 0)
    {
        rem = num % 10;

        answer += pow(rem, count);

        num = num/10;
    }

    cout<< "\n\n";

    if (answer == num_original)
    {
        cout<< num_original << " is a Armstrong's Number \n\n";
    }
    else
    {
        cout<< num_original << " is a Not Armstrong's Number \n\n";
    }

    return 0;
}