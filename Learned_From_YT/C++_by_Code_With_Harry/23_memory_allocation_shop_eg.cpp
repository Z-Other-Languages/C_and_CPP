/*
    1. take input as itemID, itemPrice, and with one cylce of input coutner will increment.

    2. with the help of the display function we can print all the functions yet taken input from i=1 to i = counter;
*/

#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

class shop
{

    // data members
    int itemId[100];
    int itemPrice[100];
    int counter;

    public: 
        // member function
        void initCounter(void) {counter = 0; }
        void setPrice(void);
        void displayPrice(void);

};

void shop :: setPrice(void)
{
    cout<< "Enter the Id of Item Number : " << counter+1 <<endl;
    cin>> itemId[counter];
    cout<< "Enter the Price of the Item ";
    cin>> itemPrice[counter];
    counter++;
}

void shop :: displayPrice(void)
{
    cout<< endl;
    for (int i=0; i<counter; i++)
    {
        cout<< "The price of item with id : " << itemId[i] << " is Rs "<< itemPrice[i] << endl; 
    }
}

int main()
{
    shop dukkan;
    dukkan.initCounter();
    dukkan.setPrice();
    dukkan.setPrice();
    dukkan.setPrice();
    dukkan.displayPrice();
    return 0;
}