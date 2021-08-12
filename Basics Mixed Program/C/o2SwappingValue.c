// Swapping Values
#include<stdio.h>
int main(){

    int a, b, temp;
    printf("\n\nSwapping Values !!!!");
    printf("\n\nEnter the value of a : ");
    scanf("%d", &a);
    printf("\nEnter the value of b :");
    scanf("%d", &b);
    

    printf("\n\nValues before Swapping :-\n\n a = %d  ; b = %d ", a, b);

    // now swapping numbers
    temp = a; // a stores the value of temp
    a = b;
    b = temp;
    printf("\n\nValues after Swapping :-\n\n a = %d  ; b = %d \n\n", a, b);


}