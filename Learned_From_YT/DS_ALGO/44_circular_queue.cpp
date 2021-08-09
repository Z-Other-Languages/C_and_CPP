#include<iostream>
#include<stdlib.h>
using namespace std;

struct circularQueue{
    int size;
    int f;  // f means front  
    int r;  // r means rare or end
    int *arr;
};

int isEmpty(struct circularQueue *q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
}

int isFull(struct circularQueue *q){
    if( (q->r+1) % q->size == q->f  ){
        return 1;
    }
    return 0;
}

void enqueue(struct circularQueue *q, int val){
    if(isFull(q)){
        cout<< "This circular Queue is Full.";
    }
    else{
        q->r = (q->r+1) % q->size;
        q->arr[q->r] = val;
        cout<< "Enqued Element : " << val << endl;
    }
}

int dequeue(struct circularQueue *q){
    int a =-1;
    if(isEmpty(q)){
        cout<< "This Queue is Empty.\n Nothing Here to Remove! " << endl;
    }
    else{
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main(){
    struct circularQueue q;
    q.size = 4; // one space of storage is always reserved in circular queue
    q.f = q.r = 0;  // in case of circular queue always take 0
    q.arr = (int *)malloc(q.size * sizeof(int));

    enqueue(&q, 45);
    enqueue(&q, 74);
    enqueue(&q, 7);
    
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    enqueue(&q, 25);
    enqueue(&q, 50);
    enqueue(&q, 75);

    

    return 0;
}

