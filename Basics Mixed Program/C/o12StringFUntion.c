// String Funtion
#include<stdio.h>
#include<string.h>
int main(){
    char a1[25];
    char a2[30];
    gets(a1);
    gets(a2);
    printf("Length of String is %d ", strlen(a1) );
    printf("\nconcatenation of two string - %s", strcat(a1,a2));
    printf("\nlower case - %s ", strlwr(a1) );
    printf("\nupper case - %s ", strupr(a1) );
}