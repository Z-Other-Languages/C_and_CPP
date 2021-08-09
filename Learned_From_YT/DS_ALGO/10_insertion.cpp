// Traversal and Insertion
#include<iostream>
using namespace std;

void display(int arr[], int size){
    // Traversal : Visiting every element at once
    for(int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

int insertArr(int arr[], int size, int newElement, int capacity, int index){
    if(size > capacity || size < index){
        cout<< "Error! Enter a valid size";
    }
    else{
        for(int i = size-1; i >= index; i--){
            arr[i+1] = arr[i];
        }
        arr[index] = newElement;
        cout<< "Element Shifted Successfully." << endl;
    }
    return 1;
}

int main(){
    int arr[100] = {10,5,19, 2, 1};
    int size = 5, newElement=88, capacity=100, index=0;
    display(arr, size);

    insertArr(arr, size, newElement, capacity, index);
    size += 1;
    display(arr, size);
    return 0;
}