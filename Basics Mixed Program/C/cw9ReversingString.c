// Reversing String
#include<stdio.h>
#include<conio.h>
void main(){
    
    int i, j, k;
    char str[100];
    char rev[100];

    printf("\n\nEnter the Word : ");
    scanf("%s", str);
    printf("\nYour original string is %s", str);

    for (i=0; str[i] != '\0' ; i++ );
    {
        k = i-1;
    }

    for (j=0; j<=i-1; j++)
    {
        rev[j] = str[k];
        k--;
    }
    
    printf("\n\nYour reversed string is %s \n", rev);
    
    getch();

}