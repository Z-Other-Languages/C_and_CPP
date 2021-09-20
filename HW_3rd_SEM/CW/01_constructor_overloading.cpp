#include<iostream>
using namespace std;

class Sample
{
    // int a;

    public:
        Sample()
        {
            cout<< "Constructor with No Parameter." << endl;
        }

        Sample(int a)
        {
            cout<< "Contructor with Single Parameter." << endl;
        }

        Sample(int b, int c)
        {
            cout<< "Constructor with Multiple Parameter.";
        }

};

int main()
{
    Sample obj;
    
    Sample obj1(5);

    Sample obj2(77);

}