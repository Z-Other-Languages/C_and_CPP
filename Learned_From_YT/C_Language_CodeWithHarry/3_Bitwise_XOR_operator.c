#include<stdio.h>
int main(){
    int a, b;

    printf("\n\nEnter the First Truth Value : ");
    scanf("%d", &a);

    printf("\nEnter the Second Truth Value : ");
    scanf("%d", &b);

    printf("\nBitwise XOR is : %d \n\n", a^b);

    return 0;
}