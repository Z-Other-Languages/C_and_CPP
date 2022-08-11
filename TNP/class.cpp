#include <bits/stdc++.h>
// #include <iostream>
// #include <string.h>
using namespace std;

class Book
{
public:
    char title;
    char author;
    char isbn;
    int pages = 500;
    float price;
    // member data, state attribute, instance variable.

    // 👇 Constructor Class - we use this when we want to set default value at every time when we create object.
    Book()
    {
        cout << endl
             << "Default Constructor is Called";
    }

    ~Book()
    {
        cout << endl
             << "Destructor is Called";
    }

    void acceptData()
    {
        cout << endl
             << "Enter the title of the book : ";
        cin.getline(title, 50);

        cout << "Enter the Author of the Book : ";
        cin.getline(author, 15);

        cout << "Enter the Price of the book : ";
        cin>> price;

        cout << "Enter ISBN of the book : ";
        cin >> isbn;

        cout << "Enter Page of the book : ";
        cin >> pages;
    }

    void showData()
    {
        cout << endl
             << "Title : " << title;
        cout << endl
             << "Author : " << author;
        cout << endl
             << "isbn : " << isbn;
        cout << endl
             << "Price : " << price;
    }

    // void setTitle(string t)
    // {
    //     title = t;
    // }
};

int main()
{
    Book obj; // Default Constructor is called automatically when we create object of a class
    cout << obj.pages;

    // obj.setTitle("Training and Placement");

    obj.acceptData();

    return 0;
}