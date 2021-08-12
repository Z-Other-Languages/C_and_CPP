// Pattern Triangle
#include<stdio.h>
int main(){

    int n=7, i,j;

    for (i=0; i<n; i++)
    {
        for (j=n-i; j>0; j--){
        printf("*");
        }
        printf("\n");
    }
}