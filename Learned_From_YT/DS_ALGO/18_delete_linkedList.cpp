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

// CASE 1 : Delete the First Element
struct Node  *delete_first(struct Node *head)
{
    // struct Node *ptr = head;
    // ABOVE 1 LINE AND BELOW 2 LINES ARE CORRECT
    struct Node *ptr;
    ptr = head;

    head = ptr->Next;
    free(ptr);
    return head;
};

// CASE 2 : Delete the Element at a given index
struct Node *delete_at_index(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->Next;

    for(int i=0 ; i < index-1; i++)
    {
        p = p->Next;
        q = q->Next;    // traverse q to the index that is to be deleted
    }

    p->Next = q->Next;
    free(q);
    
    return head;
}

// CASE 3 : Delete Last Element of the Linked List
struct Node *delete_last(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->Next;

    
    while (q->Next != NULL)
    {
        p = p->Next;
        q = q->Next;
    }

    p->Next = NULL;
    free(q);

    return head;
}

// CASE 4 : Delete the Element with a given value from the linked list
struct Node *delete_element(struct Node *head, int element)
{
    struct Node *p = head;
    struct Node *q = head->Next;

    while (q->data != element && q->Next != NULL)
    {
        p = p->Next;
        q = q->Next;
    }

    if(q->data == element)
    {
        p->Next = q->Next;
        free(q);
    }

    return head;
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

    cout<< "Linked List Elements" << endl;
    linked_list_traversal(head);


    // cout<< endl<< "Delete Head of the Linked List" << endl;
    // head = delete_first(head);
    // linked_list_traversal(head);


    // cout<< endl<< "Delete at given index of the Linked List" << endl;
    // head = delete_at_index(head, 2);
    // linked_list_traversal(head);


    // cout<< endl<< "Delete Last Element of the Linked List" << endl;
    // head = delete_last(head);
    // linked_list_traversal(head);


    cout<< endl<< "Delete Particular Element of the Linked List" << endl;
    head = delete_element(head, 28);
    linked_list_traversal(head);

    return 0;
}