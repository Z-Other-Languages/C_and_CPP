#include <stdio.h>

int accept()
{
    int n;
    scanf("%d", &n);
    return n;
}

int main()
{
    printf("Enter the Number : \n");
    int c = accept();
    printf("Received Sucessfully\n");
    printf("Your Number is %d", c);
    
    return 0;
}