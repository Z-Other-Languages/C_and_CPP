// Q. Take input from the sutdents one by one & Finally Print All the data of the students in End

#include <iostream>
using namespace std;



void take_input(int n, string name[], int r[], string b[])
{
    for(int i=0; i<n; i++)
    {

        cout << "\nEnter Your Name : ";
        cin >> name[i];

        cout << "Enter Your Roll No : ";
        cin >> r[i];

        cout << "From which Branch You are : ";
        cin >> b[i];

        cout << "\n***** Data Accepted Successfully ! You may Leave Now *****\n ";
        cout << "Make New Entry for Next Students\n";

    }
}



void output(int n, string name[], int r[], string b[])
{
    cout << "\nAll Student File Record Informations are below : \n";
    
    for(int i=0; i<n; i++)
    {
        cout << "\n Name : " << name[i];

        cout << "\n Roll No : " << r[i];

        cout << "\n Branch : " << b[i] << endl << endl;
    }
}



int main()
{

    int n;
    cout << "\nEnter the Number of Students to make Entry for them : ";
    cin >> n;

    string *name; // Variable NAME Declaration
    int* r;  // Variable ROLL NUMBER Declaration
    string* b; // Variable Branch Name Declaration

    name = new string[n];
    r = new int[n];
    b = new string[n];

    take_input(n, name, r, b);

    output(n, name, r, b);
}
