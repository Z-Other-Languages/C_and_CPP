#include <iostream>
using namespace std;

void countFun(int x)
{
    int count;
    while (x > 0)
    {
        x = x / 10;
        
    }
}

int main()
{

    cout << "Enter any Number to find its \n Unique digit : ";

    int num = 232356;
    int count = 0;

    int i;
    int eachDigit[i];
    int temp = num;
    while (temp > 0)
    {
        temp = temp / 10;
        cout << "\ntemp : " << temp << endl;
        eachDigit[i] = temp * 10 - temp;
        i++;
        count++;
    }

    return 0;
}