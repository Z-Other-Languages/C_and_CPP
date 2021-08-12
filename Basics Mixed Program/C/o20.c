// Swapping value using third variable
#include<stdio.h>
int main(){
    int x, y, k;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of y : ");
    scanf("%d", &y);

    printf("\nValues before Swapping : ");
    printf("\nx = %d  &   y = %d  ",x, y);

    k=x;
    x=y;
    y=k;
    
    printf("\nValues after Swapping : ");
    printf("\nx = %d  &   y = %d  ",x, y);

    return 0;

}