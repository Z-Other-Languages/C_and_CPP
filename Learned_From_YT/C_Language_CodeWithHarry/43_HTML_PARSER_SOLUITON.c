// HTML PARSER

#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int in = 0; // Variable to track whether we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    // REMOVE THE TRAILING SPACES
    while (string[0] == ' ')
    {
        // shift the string to the left
        for (int i = 0; i < strlen(string); i++)
        {
            /* code */
            string[i] = string[i+1];
        }
    }

    // REMOVE THE TRAILING SPACES FROM THE END
    while(string[strlen(string)-1] == ' ')
    {
        string[strlen(string)-1] = '\0';
    }
}

int main()
{
    char string[] = "<h1 gfdghrfyghrgtrytw>         This is a             Heading         </h1>";
    parser(string);
    printf("\n\nThe parsed string is : ~~%s~~", string);

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