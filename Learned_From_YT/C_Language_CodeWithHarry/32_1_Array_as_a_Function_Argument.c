#include <stdio.h>

int sum(int arr[])
{
    int sum_of_array = 0;
    
    for (int i = 0; i <= 6; i++)
    {
        sum_of_array += arr[i];
    }

    return sum_of_array;
}

int main()
{
    int result;

    // Always give the size of the array larger the exact value else you get an error
    int array[10] = {2, 5, 5, 4, 6, 8};
    result = sum(array);
    printf("Result = %d ", result);

    // int y= sizeof(array) / sizeof(array[0]);

    // printf("\nSize of Array is : %d ", y);
    // return 0;
}