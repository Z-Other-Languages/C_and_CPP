#include<stdio.h>
int run(int x, int y)
{
    return x+y;
}

int wow(int x , int y)
{
    return x-y;
}

void main(){

    printf("%d", run(12,18) );
    printf(" %d ", wow(88, 75));

}
