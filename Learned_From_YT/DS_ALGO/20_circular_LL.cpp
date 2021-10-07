// Circular Linked List and Insertion

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node *Next;
};

void circular_LL_traversal(struct Node *head)
{
    struct Node *ptr = head;

    do{
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->Next;
    }while (ptr != head);
    
}

struct Node  *insert_at_first(struct Node *head, int data)
{
    struct Node *ptr = head;    // ptr is the new element that is to be added at the first
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    /*
    traversing node *p to the end
    *p is traversed to the end and then *p next points to the New Element *ptr which is now the head
    and finally New Head *ptr next element points to the previous 1st element
    by doing so previous 1st element is Now 2nd Element  */
    struct Node *p = head->Next;
    while (p->Next != head)
    {
        p = p->Next;
    }

    p->Next = ptr;
    ptr->Next = head;
    head = ptr;

    return head;
};

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
    fourth->Next = head;

    circular_LL_traversal(head);

    cout << endl << "Circular LL after Insertion at First." << endl;
    head = insert_at_first(head, 550);
    circular_LL_traversal(head);
    return 0;
}