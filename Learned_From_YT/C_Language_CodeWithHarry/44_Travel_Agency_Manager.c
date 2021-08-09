// TRAVEL AGENCY MANAGER

// (Q.) You manage a Travel Agency and you want your driver to input their following details : 
// 1. Name
// 2. Driving License Number
// 3. Route
// 4. Kms
// Your Program should be able to take 'n=3' times as input and your drivers will start inputting their details one by one.

// Your Program should print details of the drivers in a beautiful fashion.

// User Structure


// MY HIT AND TRIAL CODE IS BELOW

#include<stdio.h>
#include<string.h>

struct employee{
    char name[50];
    char route[50];
    int license_num;
    int distance;

};



void sentence_input(){
      for (int i = 0; i < 3; i++)
    {
        int b = 10;
        struct employee ej;
        printf(" : ");
        // scanf("%s", &j.name);
        scanf("%[^\n]%*c", &ej.name);
        goto LOOP1;
    }
}

void num_input(){
      for (int i = 0; i < 3; i++)
    {
        struct employee j;
        printf(" : ");
        // scanf("%s", &j.name);
        scanf("%[^\n]%*c", &j.license_num);

       
    }
}

int main()
{
    printf("\n Value of b : %d", b);

    printf("\n!! Welcome to Bhopal Travel Agency !!\n");
    printf("\n\nEnter Your Name \n");
    sentence_input();
  
    printf("\nEnter you Id Number : \n");
    sentence_input();

    // char y[50] = 2.name;

    LOOP1:
    printf("\nName of second employee : %[^\n]%*c", e2.name);
    return 0;
}