// Learning break and continue inside if loop inside for loop
#include<stdio.h>
int main(){
    int x, i;

    for(i=0; i<10; i++)
    {
        printf("\n\nTop Text \n");
        printf("Enter the Value of x : ");
        scanf("%d", &x);
        printf("\nThe Value of x is %d", x);


        if(x>20)
        {
            // break;
            // continue;
        }

        printf("\n\nThis is Bottom Text");

    }

    return 0;
}