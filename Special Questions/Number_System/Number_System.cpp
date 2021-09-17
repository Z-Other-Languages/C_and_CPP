#include<iostream>
using namespace std;

class Number_System
{
    int num, e, result;

    public:
        void take_input();

        // Number System
        void dec_to_bin();
        void bin_to_dec();
        void dec_to_octal();
        void dec_to_heaxa_decimal();

};

void Number_System :: take_input()
{
    cout<< "\nEnter the Correct Choices given below : \n";

    cout<< "1. Decimal -->> Binary " << endl;
    cout<< "2. Binary  -->> Decimal" << endl;
    cout<< "3. Decimal  -->> Octal" << endl;
    cout<< "4. Decimal  -->> Hexadecimal" << endl;


    cin>> e;

    switch(e)
    {
        case 1:            
            // dec_to_bin();
            break;        

        case 2:
            // bin_to_dec();
            break;

        case 3:
            // dec_to_octal();
            break;

        case 4:
            // dec_to_heaxa_decimal();
            break;

        default:
            cout<< "\nError! Please Enter the Correct Option.\n";
    }
}

void Number_System :: dec_to_octal()
{
    cout<< "Enter the Decimal Number : " << endl;
    cin>> num;

    if(num%8 == 0)
    {
        num = num/8;
        result = 0;
    }
}

int main()
{
    Number_System obj;
    obj.take_input();

    return 0;
}