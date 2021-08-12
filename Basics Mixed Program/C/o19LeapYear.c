//  Leap Year
#include<stdio.h>
int main(){

    int n;
    printf(" Enter the year to check for leap year : ");
    scanf("%d",&n);

    if (   ((n%4==0) && (n%100!=0))   ||  (n%400==0) )
    {
        printf("%d is a Leap Year ", n);
    }
    else
    {
        printf("%d is not a leap year", n);
    }

    

}