#include<stdio.h>
#include<string.h>

union Students
{
    int id;
    char fav_char;
    char name[34];
    int marks;
};

int main()
{
    union Students s1;
    s1.id = 1;
    strcpy(s1.name, "Ayush");
    s1.fav_char = 'u';
    s1.marks = 95;
    

    printf("The id is %d \n", s1.id);
    printf("The Marks is %d \n", s1.marks);
    printf("The fav_char is : %c \n", s1.fav_char);
    printf("The Name is %s \n", s1.name);
    

    return 0;
}