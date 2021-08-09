// kms to miles
// inches to foot
// cms to inches
// pound to kgs
// inches to meters

#include <stdio.h>

int main()
{

    while(1)
    {
        printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("Press Any Key to Continue.\nOr  Press 'q' to Quit the Program");
        printf("\n1. kms to miles \n2. inches to foot \n3. cms to inches \n4. pound to kgs \n5. inches to meters\n");
       
        float first, second;
        char c, e;
        scanf("%c", &e);

        switch (e)
        {
        case 'q':
        printf("Quitting the Program .....");
            goto end;
            break;
        case '1':
            printf("\nEnter the first unit value : ");

            scanf("%f", &first);
            second = first * 0.621371;
            printf("\n%f kms is equal to %f miles \n ", first, second);

            break;

        case '2':
            printf("\nEnter the first unit value : ");
            first;
            scanf("%f", &first);
            second = first * 0.0833333;
            printf("\n%f inches is equal to %f foot \n ", first, second);

            break;

        case '3':
            printf("\nEnter the first unit value : ");
            first;
            scanf("%f", &first);
            second = first * 0.393701;
            printf("\n%f cms is equal to %f inches \n ", first, second);

            break;

        case '4':
            printf("\nEnter the first unit value : ");
            first;
            scanf("%f", &first);
            second = first * 0.453592;
            printf("\n%f pound is equal to %f kgs \n ", first, second);

            break;

        case '5':
            printf("\nEnter the first unit value : ");
            first;
            scanf("%f", &first);
            second = first * 0.0254;
            printf("\n%f inches is equal to %f meters \n ", first, second);

            break;

        default:
            printf("Give a Valid Entry ?");
            break;
        }
    }

    end:
    printf("");
    return 0;
}