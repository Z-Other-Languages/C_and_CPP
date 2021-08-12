// Use of struct ie,  structure
#include<stdio.h>
#include<string.h>
struct Person{

    int id;
    char name[20];
    int salary;
};

void main(){
    struct Person p1;
    p1.id = 12;
    strcpy(p1.name, "Samuel"); // you cannot invoke name directly so use strcpy

    p1.salary = 2500;
    printf("ID is : %d \n", p1.id);
    printf("Name is : %s \n", p1.name);
    printf("salary is : %d ", p1.salary);

}

