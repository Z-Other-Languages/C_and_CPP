#include <stdio.h>
#include <conio.h>

int main()
{
    char str[10] = "Javajuly";

    int size = sizeof(str);
    printf(size); // ❌

    return 0;
}