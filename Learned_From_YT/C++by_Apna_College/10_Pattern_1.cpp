#include <iostream>
#include <unistd.h>

using namespace std;

// in case of if elseif elseif else
// only and only one case is executed.
void test()
{
    int a = 10;
    int b = 5;

    if (b > a)
    {
        cout << "First is executed" << endl;
    }
    else if (a > 8)
    {
        cout << "Second is also fired" << endl;
    }
    else if (a > 2)
    {
        cout << "Second is also fired" << endl;
    }
    else
    {
        cout << "Third is also fired";
    }
}

void rect_patt()
{

    int l, b;
    cout << "Enter the dimensions(length*breadth) of the Rectangle : ";
    cin >> l >> b;

    if (b > l) // keeping rectangle always in landscape format
    {
        int temp = l;
        l = b;
        b = temp;
    }

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << "* ";
            sleep(1);
        }
        cout << "\n";
    }
}

void hollow_rect()
{

    int row, col;

    cout << "\nEnter the row & column : " << endl;
    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j == col)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << "\n";
    }
}

void pyramid()
{
    int n;
    cout << "\nEnter the height of the Pyramid : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void inverted_pyramid()
{
    int n;
    cout << "\nEnter the height of the Inverted Pyramid : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= i; k--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void inverted_half_pyramid()
{
    int n;
    cout << "\nEnter the height of the inverted_half_pyramid : ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void left_half_pyramid()
{
    int n;
    cout << "\nEnter the heigth of Left Half Pyramid : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "  "; // if you are giving two character space here then must give
                          // two character space below cout inside k for loop.
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void floyd_triangle()
{
    int row;
    int count = 1;

    cout << "\nEnter the number of Row for Floyd's Triangle : ";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void butterfly()
{
    int n;
    cout << "\nEnter the Number of Rows for Butterfly Pattern : ";
    cin >> n;

    // upper part of butterfly
    for (int i = 1; i <= n; i++) // upper part 'n' number of rows
    {
        for (int j = 1; j <= i; j++) //left side extreme star in each row
        {
            cout << "*";
            sleep(0.8);
        }
        for (int k = 1; k <= (2 * n) - (2 * i); k++) // spacing between extreme stars
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) //right side extreme star in each row
        {
            cout << "*";
            sleep(0.8);
        }
        cout << endl;
    }

    // Lower butterfly part
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= (2 * n) - (2 * i); k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    while (1)
    {
        cout<< "___________________________________________" << endl;
        cout<< "___________________________________________" << endl;
        cout << "\n1. Rectangle Pattern." << endl;
        cout << "2. Hollow Rectangle Pattern" << endl;
        cout << "3. Pyramid Pattern" << endl;
        cout << "4. Inverted Pyramid" << endl;
        cout << "5. Inverted Half Pyramid" << endl;
        cout << "6. Left Half Pyramid" << endl;
        cout << "7. Floyd Triangle" << endl;
        cout << "8. Butterfly Pattern" << endl;
        cout << "0. Exit " << endl;
        cout << "\nEnter the respective Pattern Number to go with : ";
        // test();

        int e;
        cin >> e;
        switch (e)
        {
        case 1:
            rect_patt();
            break;

        case 2:
            hollow_rect();
            break;

        case 3:
            pyramid();
            break;

        case 4:
            inverted_pyramid();
            break;

        case 5:
            inverted_half_pyramid();
            break;

        case 6:
            left_half_pyramid();
            break;

        case 7:
            floyd_triangle();
            break;

        case 8:
            butterfly();
            break;

        case 0:
            exit(0);

        default:
            rect_patt();
            hollow_rect();
            pyramid();
            inverted_pyramid();
            inverted_half_pyramid();
            left_half_pyramid();
            floyd_triangle();
            butterfly();
        }
    }
}
