// COMPARISON OF THREE NUMBERS

#include<iostream>
using namespace std;




void method_1(){
    int a, b, c;


    cout<< "\nEnter the First Number : ";
    cin>> a;

    cout<< "\nEnter the Second Number : ";
    cin>> b;
    cout<< "\nEnter the Third Number : ";
    cin>> c;

    if(a>b && a>c){
        cout<< "\nGreatest Number is : "<< a;
    }
    else if(b>a && b>c){
        cout<< "\nGreatest Number is : "<< b;
    }
    else{
        cout<< "\nGreatest Number is : "<< c;
    }
}

void method_2(){
    int a, b, c;
    cout<< "Enter Three Numbers \n";
    cin>>a >>b >>c;

    if (a>b){
        if(a>c){
            cout<< "Greatest Number is : " << a;
        }
        else{
            cout<< "Greatest Number is : " << c;
        }
    }

    else{
        if (b>c){
        cout<< "Greatest Number is : " << b;
        }
        else{
        cout<< "Greatest Number is : " << c;            
        }
    }

    
}

int main(){
    // method_1();
    method_2();

    return 0;
}