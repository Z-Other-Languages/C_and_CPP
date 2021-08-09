#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The Value at %d is %d \n", i, array[i]);
    }

    array[0] = 95;
    
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The Value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 99;
}

void func3(int new_arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The Value at %d, %d is %d \n", i, j, new_arr[i][j]);
        }
    }
}

int main()
{
    int arr[] = {2, 13, 9, 3};
    // printf("The Value at Index 0 is : %d \n", arr[1][0]);
    printf("The Value at Index 0 is : %d \n", arr[0]);
    func1(arr);
    printf("The New Value at Index 0 is : %d \n\n", arr[0]);

    func2(arr);
    func2(arr);

    int new_arr[2][2] = {{4, 6},
                         {9, 7}};
    func3(new_arr);

    return 0;
}