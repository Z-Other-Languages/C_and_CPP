/*
    Function object and functor
    Function Objects : A function wrapped in a class so that it is available like an object
*/
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {11, 2, 56, 8, 27, 13};

    // sort(arr, arr+5);   // in ascending ordre
    // sort(arr, arr+6);   // in ascending ordre

    sort(arr, arr+6, greater<int>() );
    
    for(int i =0; i<6; i++){
    cout << arr[i] << " " ;
    }

}