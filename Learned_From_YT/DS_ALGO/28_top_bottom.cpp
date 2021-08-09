// Push Pop operation in stack using an Array
#include<iostream>
#include<stdlib.h>
#include<climits>
using namespace std;

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
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

bool push(struct stack *ptr, int val){
    if(isFull(ptr)){
        cout<< "Stack Overflow." << endl << "Unable to Push : " << val << endl;
        return true;
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
        return false;
    }
}


int stackTop(struct stack *sp){
    return sp->arr[sp->top];
}

int stackBottom(struct stack *sp){
    return sp->arr[0];
}


int main(){
    // here structured pointer is abberbitaed as *sp
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    push(sp, 11);
    push(sp, 22);
    push(sp, 33);
    push(sp, 44);
    push(sp, 55);
    // push(sp, 66);

    cout<< "The Top Most Value of Stack : " << stackTop(sp) << endl;
    cout<< "The Bottom Most Value of Stack : " << stackBottom(sp) << endl;
    
}