// Q. Take input from the sutdents one by one & Finally Print All the data of the students in End

// Solving again but this time by passing address of the variable to the function

#include <iostream>
using namespace std;



void take_input(int n, string *name[], int *r[], string *b[])
{
    for(int i=0; i<n; i++)
    {

        cout << "\nEnter Your Name : ";
        cin >> *(name[0] + i);

        cout << "Enter Your Roll No : ";
        cin >> *r[i];

        cout << "From which Branch You are : ";
        cin >> *(b[0]+i);

        cout << "\n***** Data Accepted Successfully ! You may Leave Now *****\n ";
        cout << "Make New Entry for Next Students\n";

    }
}



void output(int n, string *name[], int *r[], string *b[])
{
    cout << "\nAll Student File Record Informations are below : \n";
    
    for(int i=0; i<n; i++)
    {
        cout << "\n Name : " << *(name[0]+i);

        cout << "\n Roll No : " << *r[i];

        cout << "\n Branch : " << *(b[0] + i) << endl << endl;
    }
}



int main()
{

    int n;
    cout << "\nEnter the Number of Students to make Entry for them : ";
    cin >> n;

    string *name; // Variable NAME Declaration
    int* r;  // Integer ke case me pointer assume nhi krna hai
    string* b; // Variable Branch Name Declaration

    name = new string[n];
    r = new int[n];
    b = new string[n];

    take_input(n, &name, &r, &b);

    output(n, &name, &r, &b);
}
