// classes and objects
#include<iostream>
using namespace std;

// class is closed by semi colon. Class is a blue print.
class Student{
    public:

    int id;
    string name;

    // Printing se related all works void mein krna hai
    void getDetails(){
        cout<< "\nID is : " << id;
        cout<< "\nName is : " << name;
    }

};

int main(){

    Student s1;
    s1.id = 1;
    s1.name = " Rahul ";
    s1.getDetails();
}