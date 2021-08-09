#include<stdio.h>
int main()
{
    // int x, y;

    // label:
    //     printf("We are inside the label");

    // goto end;

    // printf("\nHello World\n");

    // goto label;

    // end:
    // printf("We are at the end");


    int num;

    for(int i=0; i<10; i++)
    {
        printf("Value of i = %d \n", i);

        for(int j=0; j<10; j++)
    {
        printf("Enter 0 to Exit \nEnter Your Number : ");
        scanf("%d", &num);
        if(num==0)
        {
            goto end;
        }
    }

    }


    end:
    printf("\nProgram Terminated Sucessfully !");
}