#include<stdio.h>


void print_str(char str[])
{
    int i;
    while(str[i]!= '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}


int main()
{
    // char a[12] = "ayush kumar";
    // char b[20] = {'a', 'e', 'i', 'o', 'u', '\0'};
    char b[20] = "Ayush Kumar";
    
 

    print_str(b);

    // printf("%s", b);


    // char str[50];
    // gets(str);
    // printf("%s", str);
    // printf("\n");
    // puts(str);

}