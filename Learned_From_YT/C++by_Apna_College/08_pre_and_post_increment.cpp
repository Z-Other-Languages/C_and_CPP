#include<iostream>
using namespace std;

void pre_increment(){
    cout<< "\nPre Increment";
    int a=10;
    int b;

    b = ++a;

    cout<< "\na : "<< a;
    cout<< "\nb : "<< b;

}
void post_increment(){
    cout<< "\nPost Increment";

    int a=10;
    int b;

    b = a++;

    cout<< "\na : "<< a;
    cout<< "\nb : "<< b;
}

void eg_1(){
    int i=0;
    //    0   //0   //0   //1
    i = i++ - --i + ++i - i--;

    // final i :0
    cout << "Final Value of i : " <<i;
}

void eg_2(){
    int i= 10, j=20, k;

//      10    9      19    20    9    20     10   19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout<<i<<endl; //10
    cout<<j<<endl; //20
    cout<<k<<endl;  //
}

int main(){
    
    // pre_increment();
    // post_increment();
    // eg_1();
    eg_2();
}