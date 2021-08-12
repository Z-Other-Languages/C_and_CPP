#include<iostream>
using namespace std;

void eg_1(){
    int i=1;
    while (i<=2)
    {
        cout<< "\nHello World";
        i++;
    }
}


void eg_2(){

    int i=1;

    do{
        cout<< "\nHello World";
        i++;
    }
    while(i<=2);
}

void eg_3(){
    int i=1;
    for (;i<=2;)
    {
        cout<< "\nHello World";
        i++;
    }
}

int main(){
    
    // eg_1();
    // eg_2();
    eg_3();
    

    return 0;

}