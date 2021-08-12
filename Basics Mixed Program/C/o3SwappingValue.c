// swapping numbers using magic trick
#include<stdio.h>
int main() {
    int a, b;
    printf("\n\nEnter the value of a : ");
    scanf("%d", &a);
    printf("\n\nEnter the value of b : ");
    scanf("%d", &b);

    printf("\nValues before swapping :-");
    printf("\na = %d ; b = %d \n\n", a, b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("\nValues after swapping :- ");
    printf("\na = %d ; b = %d \n\n", a, b );
    


}