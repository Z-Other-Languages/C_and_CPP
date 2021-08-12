#include<stdio.h>
int main() {


    int a;
    printf("\n\n**** Number comparison by 100 ****");
    printf("\n\nEnter Your Number : ");
    scanf("%d", &a);

    if(a<100)
    printf("Number is Less than 100 !!");
    else if(a==100)
    printf("Number is 100 !!");

    else
    printf("Number is greater than 100 !!");

}


