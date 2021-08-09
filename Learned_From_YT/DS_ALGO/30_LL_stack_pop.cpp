// Linked List Stack PUSH POP PEEK
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

void linked_list_traversal(struct Node * ptr){
    while(ptr != NULL){
        cout<< "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int isEmpty(struct Node * top){
    if(top == NULL){
        return 1;
    }else{ 
        return 0;
    }
}

int isFull(struct Node * top){
    struct Node * p;
    p = (struct Node *)malloc(sizeof(struct Node));
    if(p == NULL){
        return 1;
    }else{
        return 0;
    }
}

struct Node *push(struct Node * top, int val){
    if(isFull(top)){
        cout<< "Stack Overflow" << endl;
        return 0;
    }
    else{
        struct Node * n = (struct Node *)malloc(sizeof(struct Node));
        n->data = val;
        n->next = top;
        top = n;
        return top;
    }
};

int pop(struct Node **top){
    if(isEmpty(*top)){
        cout<< "Stack Underflow" << endl;
        return 0;
    }
    else{
        struct Node *n = *top;
        *top = (*top)->next;
        int val = n->data;
        free(n);
        return val;
    }
}

int peek(struct Node **top, int pos){
    struct Node *ptr = *top;
    for(int i=0; (i < pos-1 && ptr != NULL); i++ ){
        ptr = ptr->next;
    }

    if(ptr != NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}

int main(){
    struct Node * top = NULL;
    top = push(top, 23);
    top = push(top, 29);
    top = push(top, 35);
    top = push(top, 70);

    // int element = pop(&top);
    // element = pop(&top);

    // cout<< "Popped Element is : " << element << endl;

    linked_list_traversal(top);

    for(int i=1; i<=4; i++){
        cout<< "The Value at Position " << i << " is : " << peek(&top, i) << endl;
    }

    return 0;
}