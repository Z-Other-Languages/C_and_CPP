#include<iostream>
using namespace std;
class complex{
 int a;
 int b;
 public:
 complex(int p=5, int q=2){ a=p;   
 b=q;
 }
 ~complex(){
 cout<<"Destructor is called "<<endl;
 }
 void Print(void){
 cout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
 }
};
int main(){
 int a,b;
 cout<<"Enter the real part of your complex number "<<endl;
 cin>>a;
 cout<<"Enter the complex part of your complex number "<<endl;
 cin>>b;
 complex c(a,b); 
 c.Print();
 
 return 0;
 
}