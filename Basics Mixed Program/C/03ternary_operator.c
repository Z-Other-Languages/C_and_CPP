#include<stdio.h>
int main(){
    int num;
    printf("\nEnter your number : ");
    scanf("%d", &num);

    printf("\n");

    // if (num%2==0){
    //     printf("%d is Even Number.", num);
    // }
    // else{
    //     printf("%d is Odd Number.", num);
    // }

    (num%2 == 0) ? printf("Even Number") : printf("Odd Number");


    return 0;
}