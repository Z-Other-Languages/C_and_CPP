// Create String Array using new keyword
// Pass string value to a function

// This question is linked to the 06_struct_faltu (Refer to this also).

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

void string_array()
{
    string *name;

    name = new string[10];

    // name = "Ayush Kumar";
    name[1] = "Ayush Kumar";
    name[2] = "Sameer";

    // cout<< name;
    cout<< name[1] << endl;
    cout<< name[2] << endl;

}

void pass_string_simply(string my_str[])
{ 
    cout << endl << "Simply declaring new keyword and Passing String in Simple way." << endl;
    my_str[0] = "ABCD";
    my_str[1] = "Hello";
    my_str[2] = "Second";
    my_str[3] = "Third";
    my_str[4] = "Fourth";

    for(int i=0; i<5; i++)
    {

    // cout<< *my_str[0] << endl;
    // cout<< *(my_str[0] + i) << endl;
    cout<< my_str[i]  << endl;

    }
}
void pass_string_address(string *str[], int num[])
{ 
    cout<< endl << "Printing Values by Passing the address of the variable" << endl;
    for(int i=0; i<5; i++)
    {
    // cout<< *str[0] << endl;

    cout<< *(str[0] + i) << endl;
    cout<< *(num + i) << endl;
    }
}



int main()
{
    // string_array();


//  Simply declaring new keyword and Passing String in Simple way 
    string *my_str;
    my_str = new string[10];  
    pass_string_simply(my_str);




// Declaring String & passing string address to a function using pointer 👇👇👇👇👇
    int num[4];
    num[0] = 11;
    num[1] = 22;
    num[2] = 2002;
    num[3] = 33;
    num[4] = 44;

    string *str;
    str = new string[10];   
    str[0] = "ABCD";
    str[1] = "Hello";
    str[2] = "Second";
    str[3] = "Third";
    str[4] = "Fourth";

    pass_string_address(&str, num);



}