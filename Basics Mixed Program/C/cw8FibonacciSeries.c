// Fibonacci series
#include<stdio.h>
#include<conio.h>


void fibonacci(int num)
{
    int a, b, c, i=3;
    a=0;
    b=1;

    if (num == 1)
    printf("%d", a);
    if (num >=2);
    printf("%d %d", a, b);

    while (i<=num)
    {
        c = a+b;
        printf("%3d", c);
        a= b;
        b=c;
        i++;
    }
}

void main(){

    int num; 
    printf("\n\nEnter number of terms : ");
    scanf("%d", &num);

    fibonacci(num);
    getch();

}

