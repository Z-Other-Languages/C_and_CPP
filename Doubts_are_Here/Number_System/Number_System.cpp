/*
    Number System Conversion :

    [] Decimal to Binary
    [] Decimal to Octal
    [] Decimal to Heaxadecimal
    
    [] Binary to Decimal
    
    [] Octal to Decimal

    [] Hexadecimal to Decimal

*/

#include <iostream>
using namespace std;

class Number_System
{
    // here opt means options

    int num, opt, result;

public:
    void take_input();

    // Number System
    void dec_to_bin();
    void bin_to_dec();
    void dec_to_octal();
    void dec_to_heaxa_decimal();
};

void Number_System ::take_input()
{
    cout << "\nEnter the Correct Choices given below : \n";

    cout << "1. Decimal -->> Binary " << endl;
    cout << "2. Binary  -->> Decimal" << endl;
    cout << "3. Decimal  -->> Octal" << endl;
    cout << "4. Decimal  -->> Hexadecimal" << endl;

    // cin>> opt;
    opt = 1;

    switch (opt)
    {
    case 1:
        dec_to_bin();
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
        cout << "\nError! Please Enter the Correct Option.\n";
    }
}

void Number_System ::dec_to_bin()
{
    cout << "\nEnter the Decimal Number : ";
    cin >> num;

    while (num >= 0)
    {

        if (num == 1)
        {
            static int result = 1;
            break;
        }
        else if( num == 0){
            result =0;
            break;
        }
        else if (num % 2 == 0)
        {
            result += 0;
        }
        else
        {
            result += 1;
        }

        num = num / 2;
        result = result * 10;
    }

    cout << "Output : " << result;
}

int main()
{
    Number_System obj;
    obj.take_input();

    return 0;
}