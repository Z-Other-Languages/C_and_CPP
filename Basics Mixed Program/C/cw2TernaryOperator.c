#include<stdio.h>
int main() {

    int x;
    printf("\n\n*** To check for Even & Odd ***");
    printf("\n\nEnter Your Integer : ");
    scanf("%d", &x);

    (x%2==0) ? printf("%d is Even ", x) : printf("%d is Odd ", x);
    


    return 0;

}