#include<stdio.h>
#define myfunc(i,j) i##j

int main()
{
    int v1 = 40;
    int v2 = 0;
    #define myfunc(i,j) i##j
    printf("%d", myfunc(1,1)*myfunc(v,1));
    return 0;   

}
