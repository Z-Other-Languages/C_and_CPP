#include <iostream>
using namespace std;

struct student
{
    char name[100];
    int roll;
    char branch[100];
    char fav_char;
};


int main()
{
    // struct student s1, s2, s3, s4;

    struct student s[100];

    int n;
    cout<< "\nEnter the Number of Students to make Entry for them : ";
    cin>> n;

    for (int i = 1; i <= n; i++)
    {
        

        cout << "\nEnter Your Name : ";
        cin >> s[i].name;

        cout << "Enter Your Roll No : ";
        cin >> s[i].roll;

        cout << "From which Branch You are : ";
        cin >> s[i].branch;

        cout << "Your Favourite Character : ";
        cin >> s[i].fav_char;

        cout<<"\n***** Data Accepted Successfully ! You may Leave Now *****\n ";

        if (i<n){
            cout<< "Make New Entry for Next Students\n";
        }

    }

    cout << "\nAll Student File Record Informations are below : \n";

    for (int i = 1; i <= 2; i++)
    {
        cout << "\n Name : " << s[i].name;

        cout << "\n Roll No : " << s[i].roll;

        cout << "\n Branch : " << s[i].branch;

        cout << "\n Favourite Character : " << s[i].fav_char;

        cout << "\n\n";
    }
}