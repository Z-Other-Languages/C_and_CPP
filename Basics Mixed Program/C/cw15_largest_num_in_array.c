// find the largest and smallest number in an array
#include<stdio.h>
int main(){

    int a[20], size, i, big, small;
    printf("\n\nEnter the size of the array : ");
    scanf("%d", &size);

    printf("\nEnter %d Elements of the Array : \n", size);
    for (i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }

    big = a[0];
    for (i=1; i<size; i++)
    {
        if (big<a[i])
        {
            big = a[i];
        }
    }
    printf("\nLargest Elements is : %d", big);

    small = a[0];
    for (i=1; i<size; i++)
    {
        if (small>a[i])
        {
            small = a[i];
        }
    }
    printf("\nSmallest Number is : %d", small);

return 0;
    

}