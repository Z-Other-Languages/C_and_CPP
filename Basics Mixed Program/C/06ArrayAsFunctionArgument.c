#include<stdio.h>

int sum(int arr[])
{
    int sum_of_array = 0;
    for(int i=0; i<6; ++i)
    {
        sum_of_array += arr[i];        
    }
    return sum_of_array;
}


int main()
{
    int result;
    int array[] = {3,7,12,8,55,5};
    result = sum(array);
    // printf("Given Array is : %d", array);
    printf("\nSum of the Array is : %d", result);

    int number_of_array = sizeof(array)/sizeof(array[0]);
    printf("\n %d", number_of_array);
    
}