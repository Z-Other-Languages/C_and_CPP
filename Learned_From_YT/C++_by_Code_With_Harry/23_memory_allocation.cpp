#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public: 
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