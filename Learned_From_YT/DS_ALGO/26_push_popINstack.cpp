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

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        cout<< "Stack Underflow. \nCan't POP from the stack." << endl;
        return INT_MIN;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main(){
    // here structured pointer is abberbitaed as *sp
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    cout << "Empty : " << isEmpty(sp) << endl;
    cout << "Full : " << isFull(sp) << endl;
    
    push(sp, 13);
    push(sp, 26);
    push(sp, 39);
    push(sp, 52);
    push(sp, 65);

    cout << "After Push, Empty : " << isEmpty(sp) << endl;
    cout << "After Push, Full : " << isFull(sp) << endl << endl;

    cout<< pop(sp) << " is Popped from the stack." << endl; // LIFO - last in first out
    cout<< pop(sp) << " is Popped from the stack." << endl;
    cout<< pop(sp) << " is Popped from the stack." << endl;
    cout<< pop(sp) << " is Popped from the stack." << endl;
    cout<< pop(sp) << " is Popped from the stack." << endl;
    cout<< pop(sp) << " is Popped from the stack." << endl;
    

    cout << "After Push, Empty : " << isEmpty(sp) << endl;
}