// STRING CONCATENATION, REVERSE, COPYING

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[] = "Hello";
    char s2[] = "Ayush";
    // puts(strcat(s1, s2));

    printf("The Length of s1 is : %d \n", strlen(s1));
    printf("The Length of s2 is : %d \n", strlen(s2));

    printf("The Reversed String s1 is : ");
    puts(strrev(s1));

    printf("The Reversed String s2 is : ");
    puts(strrev(s2));

    char s3[50];
    strcpy(s3 , strcat(s1, s2));
    puts(s3);

    printf("\n\nThe strcmp for s1 and s2 returned is : %d", strcmp(s1, s2));

    return 0;
}