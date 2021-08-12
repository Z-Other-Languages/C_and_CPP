using namespace std;
#include<iostream>
#include<cstring>
int main(){

    string name = "Ayush Kumar";
    string *ptr = &name;

    cout<< "\nStirng is : " << name;
    cout<< "\nAddress of the Variable is : " << ptr;
    cout<< "\n\nAddress of the variable using 2nd Method is : " << &name;

    return 0;
}