// To check for Leap year or not
#include<stdio.h>
int main(){

    int year;
    printf("\n\nTo check for Leap Year !!!!");
    printf("\n\nEnter the Year : ");
    scanf("%d", &year);
    if (    ((year%4==0)&&(year%100!=0))    ||     (year%400==0)  )
    printf("%d is a Leap Year \n\n", year);
    else
    printf(" %d is Not a Leap Year\n\n", year);

    return 0;
}