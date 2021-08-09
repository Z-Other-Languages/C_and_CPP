#include<iostream>
#include<stdlib.h>
using namespace std;

struct queue
{
    int size;
    int f, r;   // f - means front  &   r - means rare or back in the railway ticket line
    int *arr;
};

int isEmpty(struct queue *q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
}

int isFull(struct queue *q){
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val){
    if(isFull(q)){
        cout<< "This Queue is Full." << endl;
    }
    else{
        q->r++;
        q->arr[q->r] = val;
        cout<< "Enqued Element : " << val << endl;
    }
}

int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        cout<< "This is an Empty Queue. \nNothing Here to Remove" << endl;
    }    
    else{
        q->f++; // initially f is -1. TO achieve index 0 it is incremented so on
        a = q->arr[q->f];
        cout<< "Dequeueing Element : " << a << endl;
    }
    return a;
}

int main(){
    struct queue Que;
    Que.size = 4;
    Que.f = Que.r = -1;
    Que.arr = (int *)malloc(Que.size * sizeof(int));

    enqueue(&Que, 12);
    enqueue(&Que, 24);
    enqueue(&Que, 36);
    enqueue(&Que, 48);
    enqueue(&Que, 48);

    dequeue(&Que);
    dequeue(&Que);
    dequeue(&Que);
    dequeue(&Que);
    dequeue(&Que);

    return 0;
}