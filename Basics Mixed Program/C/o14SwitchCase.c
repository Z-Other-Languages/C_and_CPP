#include<stdio.h>
int main(){

    int a;
    scanf("%d", &a);
    switch(a){

        case 10: printf("Value is 10");
        break;
        case 20: printf("Value is 20");
        break;
        case 30: printf("Value is 30");
        break;
        default : printf("None of these !!");
    }
    return 0;
}