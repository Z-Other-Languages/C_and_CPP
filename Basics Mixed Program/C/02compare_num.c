#include<stdio.h>
int main(){
    int a; 
    printf("\nEnter Your Number : ");
    scanf("%d", &a);
    printf("\n");
    if(a<100){
        printf("%d is less than 100", a);
    }
    else if(a>100){
        printf("%d is greater than 100", a);
    }
    else{
        printf("%d is Equal to 100", a);
    }

    return 0;
}