#include<stdio.h>

int main(){

int a=10;
int *p = &a;


printf("Address of a : %x ",p);
printf("\nValue of a : %d", *p);

}