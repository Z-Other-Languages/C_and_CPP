#include <stdio.h>
int main()
{
//    char a = '3';
//    char *ptra = &a;
//    printf("%d \n", ptra);
//    ptra++;

//     printf("%d \n", ptra);
//    printf("%d \n", ++ptra);
   
    int arr[] = {311, 52, 3, 4, 5, 6, 77};
    int *arrayptr = arr;
    
    printf("Value at position 3 of the array is %d \n", arr[3]);

    printf("Address of the First Element of the array is %d \n", arr);
    printf("Address of the First Element of the array is %d \n", &arr[0]);

    printf("Address of the Second Element of the array is %d \n", &arr[1]);
    printf("Address of the Second Element of the array is %d \n", arr+1 );
    
    printf("Address of the Third Element of the array is %d \n", &arr[2]);
    printf("Address of the Third Element of the array is %d \n", arr+2 );

    printf("\n::::::::::::::::::::::::::::::::::\n\n");

    printf("The Value at address of First Element of the Array is %d \n", *(&arr[2])  );
    printf("The Value at address of First Element of the Array is %d \n", arr[0]  );
    printf("The Value at address of First Element of the Array is %d \n", *(arr) );
    printf("The Value at address of First Element of the Array is %d \n", *(&arr[1]) );
    printf("The Value at address of First Element of the Array is %d \n", arr[1] );
    printf("The Value at address of First Element of the Array is %d \n", *(arr + 1) );
    return 0;
    
}