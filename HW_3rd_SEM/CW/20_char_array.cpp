#include<iostream>
using namespace std;

int main()
{
    char ch[3][8];

    cout<< "Enter the Character Array : \n";
    for(int i=0; i<3; i++)
    {
        cin>> ch[i];
    }

    cout<< "\n";
    for(int i=0; i<3; i++)
    {
        cout<< ch[i] << endl;
    }

}