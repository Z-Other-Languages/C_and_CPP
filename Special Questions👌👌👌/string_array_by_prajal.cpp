// Q. Take input from the students one by one & Finally Print All the data of the students in End

// This question is linked to the 06_struct_faltu (Refer to this also).

#include <iostream>
using namespace std;

// Declaring Global Variable 
    int n;
    string* name; // Variable NAME Declaration
    int* r;  // Variable ROLL NUMBER Declaration
    string* b; // Variable Branch Name Declaration

void global_init(){
    cout<<"\nEnter the Number of Students to make for them : ";
    cin>>n;
    name = new string[n];
    r = new int[n];
    b = new string[n];
}

int main()
{
    global_init();
    for(int i=0; i<n; i++)
    {

        cout << "\nEnter Your Name : ";
        cin >> name[i];

        cout << "Enter Your Roll No : ";
        cin >> r[i];

        cout << "From which Branch You are : ";
        cin >> b[i];

        cout << "\n** Data Accepted Successfully ! You may Leave Now **\n ";
        cout << "Make New Entry for Next Students\n";

    }


    cout << "\nAll Student File Record Informations are below : \n";

    for(int i=0; i<n; i++)
    {

        cout << "\n Name : " << name[i];

        cout << "\n Roll No : " << r[i];

        cout << "\n Branch : " << b[i];
    }
}