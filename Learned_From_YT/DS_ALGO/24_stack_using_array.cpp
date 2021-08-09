/* Check If stack is empty or full */

#include<iostream>
#include<stdlib.h>
using namespace std;

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1){
        return 1; // means Yes, the stack is Empty.
    }
    else{
        return 0; // means Stack is not empty
    }
}

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
 
    // struct stack s;
    // s.size = 80;
    // s.top = -1;     // if nothing is stored then it is -1
    // s.arr = (int *)malloc(s.size * sizeof(int));



    struct stack *s;    // here 's' is taken as pointer
    s = (struct stack *) malloc(sizeof(struct stack));
    s->size = 3;
    s->top = -1;     // if nothing is stored then it is -1
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Adding data manually
    // s->arr[0] = 8;
    // s->top++;


    // if(isEmpty(s)){
    //     cout<< "The Stack is Empty." << endl << "Nothing is Here." << endl ;
    // }
    // else{
    //     cout<< "The Stack is Not Empty." << endl << "Somthing is There." << endl ;
    // }







    // Adding data manually
    s->arr[0] = 8;
    s->top++;
    s->arr[1] = 2;
    s->top++;
    s->arr[2] = 5;
    s->top++;


    if(isFull(s)){
        cout<< "The Stack is Full." << endl << "Housefull." << endl;
    }
    else{
        cout<< "The Stack is Not Full." << endl << "Some spaces are left here" << endl ;
    }

}