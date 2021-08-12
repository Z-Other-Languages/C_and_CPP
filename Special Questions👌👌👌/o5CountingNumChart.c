// counting table is row and column
#include<stdio.h>
int main(){

    int i, j, count;
    printf("\n\n");
    for (i=1; i<=10; i++)   {

        for (j=i; j<=100; j+=10)
        {
            printf("%4d", j);
        }
        printf("\n");
        

    }

    return 0;

}