#include<iostream>
using namespace std;

int main(){

    int n;
    // cout<<"\nEnter any Number : ";
    cin>> n;

    int i;
    for(i=2; i<n; i++){

        if (n%i==0){
            cout<< "\nNot a Prime Number.\n";
            break;                       
        }
    
    } 

    if(i==n){
        cout<< "\nThis is a Prime Number.";
    }

}