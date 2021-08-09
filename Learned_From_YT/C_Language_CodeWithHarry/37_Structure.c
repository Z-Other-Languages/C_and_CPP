// STRUCTURE MEMBER OPERATOR IS ' . '
#include<stdio.h>
#include<string.h>
struct student{
        int id;
        int marks;
        char fav_char;
        char name[50];
    };

int main()
{
    struct student harsh, ayush, rohit;
    harsh.id = 1;
    ayush.id = 2;
    rohit.id = 3;
    harsh.marks = 34;
    ayush.marks = 96;
    rohit.marks = 85;

    harsh.fav_char = 'p';
    ayush.fav_char = 'w';
    rohit.fav_char = 'z';

    strcpy(ayush.name, "Ayush : Best Programmer.");
    printf("Ayush Details : %s", ayush.name);

    printf("\n\nharsh got %d marks. \n", harsh.marks);
    printf("\n\nAyush got %d marks. \n", ayush.marks);
    printf("\n\nrohit got %d marks. \n", rohit.marks);
}