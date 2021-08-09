#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int savings;
    cin>>savings;

    if(savings>500) {
        cout<<"Neha\n";
    }
    else{
        cout<<"friends";
    }
}