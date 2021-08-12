#include<iostream>
using namespace std;

class Parent1{
    public:
    
    void par1(){
        
        cout<< "\n\nWelcome to  Winodws 10";
    }

};

class Parent2{
    public:

        void par2(){
            
            cout<< "\nThis is Cortana";
        }
};

class Child : public Parent1, public Parent2{

    public:
        void show_child(){
            cout<< "\nI am a Child";
        }
};

int main(){

    Child obj;
    obj.par1();
    obj.par2();
    obj.show_child();
}