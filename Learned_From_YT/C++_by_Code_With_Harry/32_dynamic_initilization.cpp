#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class BankDeposit
{
    int principle;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit(){}    // this default constructor is called so the we can create objects in the mains like BankDeposit a, b, c;     so it is necessary

    BankDeposit(int p, int y, double r); // r can be value like 0.04
    BankDeposit(int p, int y, int r);   // r can be value like 4

    void show();
};

BankDeposit :: BankDeposit(int p, int y, double r)
{
    principle = p;
    years = y;
    interestRate = r;
    returnValue = principle;

    for (int i=0; i<y; i++)
    {
        returnValue *= (1+interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principle = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principle;

    for (int i=0; i<y; i++)
    {
        returnValue *= (1+ interestRate);
    }
}

void BankDeposit :: show()
{
    cout<< "Principle Amount was : " << principle << endl;
    cout<< "Return Value after " << years << " years is : " << returnValue << endl;
}

int main()
{
    /*
    To Executer this method your must include Default Constructor in the public of the class
    like            BankDeposit(){};         
    */
    BankDeposit a, b, c;
    a = BankDeposit(100, 2, 0.08);
    a.show();

    // ALTERNATE METHODD : below code don't need any empty constructor to be called in the public section of the class
    BankDeposit p(100, 2 , 15);
    p.show();
    return 0;
}