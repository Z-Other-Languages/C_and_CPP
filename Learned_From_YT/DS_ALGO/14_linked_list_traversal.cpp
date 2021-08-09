#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node *Next;
};

void linked_list_traversal(struct Node *ptr){
    while (ptr != NULL)
    {
        cout<< "Element : " << ptr->data << endl;
        ptr = ptr->Next;
    }
    
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for the linked list in the Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // link first and second node
    head->data = 14;
    head->Next = second;

    // link Second and third node
    second->data = 28;
    second->Next = third;

    // link Third and Fourth Node
    third->data = 42;
    third->Next = fourth;

    // link fourth and NULL Node
    fourth->data = 56;
    fourth->Next = NULL;

    linked_list_traversal(head);

    return 0;
}