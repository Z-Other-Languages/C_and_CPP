#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;

    ptr = (int *)malloc(10 * sizeof(int));

    for(int i = 0; i<3; i++ ){
        
        printf("Enter the Value of array Number %d : ", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<3; i++)
    {
        printf("\nThe Value at %d of this Array is : %d", i, ptr[i]);
    }

    return 0;
}