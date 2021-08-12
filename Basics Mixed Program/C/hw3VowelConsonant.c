#include<stdio.h>
int main(){

    char str;
    printf("\n\n***** To chek for Vowel & consonant ***** ");
    printf("\nEnter a String : ");
    scanf("%c", &str);
    if (str == 'a' || str=='e' || str=='i' || str=='o' || str=='u')
    printf("\n\nEntered character is Vowel \n\n");  
    else
    printf("\n\nEntered Character is Consonant \n\n");

}