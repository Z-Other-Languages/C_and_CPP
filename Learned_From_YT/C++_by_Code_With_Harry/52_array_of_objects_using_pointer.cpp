#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;
    public:
        void setData(int a, float b)
        {
            id = a;
            price = b;
        }

        void getData()
        {
            cout<< "Code of the Item is : " << id << endl;
            cout<< "Item Price : " << price << endl;
        }
};


int main(){

    int size = 3;
    // int *ptr = &size;

    // int *ptr = new int[30];


    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;

    int p;
    float q;

    // (*ptr).setData(2, 5.5);
    // (*ptr).getData();

    // ptr->setData(8,6.46);
    // ptr->getData();

    for (int i = 0; i < size; i++)
    {
        cout<< "Enter the ID and Price of Item " << i+1 << endl;
        cin>> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout<< "For Item No : " << i+1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    return 0;

}