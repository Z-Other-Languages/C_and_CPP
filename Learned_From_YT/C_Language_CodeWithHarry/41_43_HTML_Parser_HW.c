// HTML PARSER 

#include<stdio.h>

int main()
{
    char string[] = "<h1> This is a Heading </h1>";
    parser(string);


    return 0;
}


/*
    INPUT: 
    <h1> This is a Heading </h1>

    OUTPUT: 
    This is a Heading


    INPUT: 
    <span>This is a span heading</span>

    OPUTPUT:
    This is a span heading
*/