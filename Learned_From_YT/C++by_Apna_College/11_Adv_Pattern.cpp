// Function me jab hmm argument pass krte hai tb sirf value pass hoti hai variable nhi
#include <iostream>
using namespace std;

void inv_pattern(int n)
{

    // Upper Part
    for (int i = 1; i <= n; i++)
    {
        int count = 1;
        for (int j = 1; j < i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    // Lower Part
    for (int i = 1; i <= n; i++)
    {
        int count = 1;
        for (int j = n; j >= i; j--)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void zero_one_pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }

        cout << endl;
    }
}

void rhombus(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "  ";
        }
        for (int k = 1; k <= n; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void num_pascal_triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int count = 1;

        for (int j = n; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void palindromic_pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int j = 1;
        for (; j <= n - i; j++)
        {
            cout << "  ";
        }

        int k = i;
        for (; j <= n; j++)
        {
            cout << k-- << " ";
        }

        k = 2;
        for (; j <= n + i - 1; j++)
        {
            cout << k++ << " ";
        }
        cout << endl;
    }
}

void star_pattern(int n){

    // Upper part of star pattern
    for (int i=1; i<=n; i++)
    {

        int j=1;
        for (; j<=n-i; j++)
        {
            cout<< "  ";
        }
        for (; j<=n; j++)
        {
            cout<< "* ";
        }

        // int k=i;
        for (; j<=n+i-1; j++)
        {
            cout<< "* ";
        }

        cout<< endl;
    }


    // Lower of Star Pattern
    for (int i=n-1; i>=1; i--)
    {

        int j=1;
        for (; j<=n-i; j++)
        {
            cout<< "  ";
        }
        for (; j<=n; j++)
        {
            cout<< "* ";
        }

        // int k=i;
        for (; j<=n+i-1; j++)
        {
            cout<< "* ";
        }

        cout<< endl;
    }

}

void zig_zag(int n){
    // int n=9;

    for (int i=1; i<=3; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if ( ((i+j)%4==0) || (i==2 && j%2==0) )
            {
                cout<< "* ";
            }
            else
            {
                cout<< "  ";
            }
        }
        cout<< endl;
    }
}

int main()
{
    int n = 7;
    cout << "Enter the Height of the Pattern : ";
    // cin>> n;

    // inv_pattern(n);
    // zero_one_pattern(n);
    // rhombus(n);
    // num_pascal_triangle(n);
    // palindromic_pattern(n);

    cout << "\n1. Number increasing then decreasing in row" << endl;
    cout << "2. Zero and one pattern" << endl;
    cout << "3. Rhombus Pattern" << endl;
    cout << "4. Number Pascal Triangle" << endl;
    cout << "5. Palindromic Pattern" << endl;
    cout << "6. Star Pattern" << endl;
    cout << "7. Zig Zag  Pattern" << endl;
    cout << "8. " << endl;
    cout << "\nEnter the respective Pattern Number to go with : ";

    int e;
    // e=100;
    cin >> e;
    switch (e)
    {
    case 1:
        inv_pattern(n);
        break;

    case 2:
        zero_one_pattern(n);
        break;
    case 3:
        rhombus(n);
        break;
    case 4:
        num_pascal_triangle(n);
        break;

    case 5:
        palindromic_pattern(n);
        break;
    case 6:
       star_pattern(n);
        break;
    case 7:
       zig_zag(n);
        break;



    default:
        inv_pattern(n);
        zero_one_pattern(n);
        rhombus(n);
        num_pascal_triangle(n);
        palindromic_pattern(n);
        star_pattern(n);
        zig_zag(n);
    }
}