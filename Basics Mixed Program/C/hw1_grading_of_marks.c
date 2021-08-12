// Grading of Marks
#include<stdio.h>
int main(){

    int n;
    printf("\n\nEnter Your Marks (between 0 to 100) :   ");
    scanf("%d", &n);

    // Applying condition
    if (n<0){
        printf("Marks cannot be Negative !!");
    }
    else if (n<33){
        printf("Fail !!");
    }
    else if (n<50){
        printf("Average Marks \nNeed Imporvement !!");
    }
    else if (n<70){
        printf("Good Marks \nImprove next time");
    }
    else if (n<80){
        printf("Very Good");
    }
    else if (n<90){
    printf("Excellent Marks");
    }
    else if (n<100){
        printf("You are among Toppers");
    }
}