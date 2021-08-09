// Traversal and Deletion
#include<iostream>
using namespace std;

void display(int arr[], int size){
    // Traversal : Visiting every element at once
    for(int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

int insertArr(int arr[], int size, int index){
    if(index >= size){
        cout<< "Error! Enter a valid size" << endl;
    }
    else{
        for(int i = index; i <= size-2; i++){
            arr[i] = arr[i+1];
        }        
        cout<< "Element Deleted and Shifted Successfully." << endl;
    }
    return 1;
}

int main(){
    int arr[100] = {10,5,19, 2, 1};
    int size = 5, newElement=88, capacity=100, index=5;
    display(arr, size);

    insertArr(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}