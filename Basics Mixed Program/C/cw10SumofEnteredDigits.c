// sum of entered digits
#include<stdio.h>
int main(){

    int num, b,rem ,sum=0;
    printf("\n\nEnter any Positive Integer : ");
    scanf("%d", &num);

    while (num!=0)
    {
        rem = num%10;
        sum += rem;
        num = num/10;
    }

    printf("Sum of the digits of the entered number : %d", sum);

    return 0;
}