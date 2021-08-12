// calculator
using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    // clrscr();
    int a, b, c;
    char ch;
    cout<<"Enter Any Two Number : \n";
    cin>>a>>b;
    cout<<"\nPress + for Addition";
    cout<<"\nPress - for Subtraction";
    cout<<"\nPress * for Multiplication";
    cout<<"\nPress / for Divide";

    cout<<"\nEnter Your Choice :  ";
    cin>>ch;

    if(ch == '+')
    {
        cout<<"Addtion : "<<a+b;
    }

    if(ch == '-')
    {
        cout<<"Subtration : "<<a-b;
    }

    if(ch == '*')
    {
        cout<<"Multiplication : "<<a*b;
    }

    if(ch == '/')
    {
        cout<<"Divide : "<<a/b;
    }

    getch();

}