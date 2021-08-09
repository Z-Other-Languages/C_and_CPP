#include <iostream>
using namespace std;

void faltu()
{
    char button;
    cout << "\nInput a Character : ";
    cin >> button;

    if (button == 'a')
    {
        cout << "\nHello World";
    }
    else if (button == 'b')
    {
        cout << "\n Namaste";
    }

    else if (button == 'c')
    {
        cout << "Salute";
    }

    else if (button == 'd')
    {
        cout << "Hola";
    }

    else if (button == 'e')
    {
        cout << "Ciao";
    }
    else
    {
        cout << "I am still learning more";
    }
}

void fire_switch()
{
    char button;
    cout << "\nInput a Character : ";
    cin >> button;
    switch (button)
    {

    case 'a':
        cout << "\nHello World";
        break;

    case 'b':
        cout << "\n Namaste";
        break;

    case 'c':
        cout << "\nSalute";
        break;

    case 'd':
        cout << "\nHola";
        break;

    case 'e':
        cout << "\nCiao";
        break;

    default :
        cout << "\nI am still learning more";
    }
}

int main()
{

    // faltu();
    fire_switch();
}