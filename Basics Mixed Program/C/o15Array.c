#include<stdio.h>
void main(){
    
    int a[10] = {4,8,12,16,20,24,28,32,36,40};
    char c[5] = {'a', 'e', 'o', 'i', 'u'};

    for (int i=0; i<10; i++)
    {
        printf("interger %d \n", a[i]);
        
    }
    for (int i=0; i<5; i++)
    {
        printf("Character - %c \n", c[i]);
    }
}