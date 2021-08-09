#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];

    printf("Enter First String : ");
    gets(str1);

    printf("Enter Second String : ");
    gets(str2);

    printf("%s and %s are Best Friend.", str1, str2);
    puts(strcat(str1, str2));

}