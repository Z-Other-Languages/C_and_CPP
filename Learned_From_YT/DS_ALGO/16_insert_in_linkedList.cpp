#include<iostream>
#include<stdlib.h>
using namespace std;


struct Node{
    int data;
    struct Node *Next;
};

// Traversal all element and display output
void linked_list_traversal(struct Node *ptr){
    while (ptr != NULL)
    {
        cout<< "Element : " << ptr->data << endl;
        ptr = ptr->Next;
    }
    
}

// CASE 1 : Insert at First
struct Node *insertAtFirst(struct Node *head, int data)
{
    // create at new Node ptr for insertion and allocate its memory
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->Next = head;
    ptr->data = 7;

    return ptr;
};
// CASE 2 :  Insert in between particular index
struct Node *insert_in_between(struct Node *head, int data, int index)
{

    // create at new Node ptr for insertion and allocate its memory
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));

    // create a pointer *p and traverse to the end
    struct Node *p = head;
    int i = 0;
    while (i != index-1)
    {
        p = p->Next;
        i++;
    }
    
    
    ptr->data = data;
    ptr->Next = p->Next;
    p->Next = ptr;

    return head;
};

// CASE 3 : Insert at End of the Linked List 
struct Node *insert_at_end(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));

    struct Node *p = head;
    while (p->Next != NULL)
    {
        p = p->Next;
    }

    p->Next = ptr;
    ptr->Next = NULL;
    ptr->data = data;


    return head;
};

struct Node *insert_after_a_node(struct Node *head, struct Node *preNode, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->Next = preNode->Next;
    preNode->Next = ptr;

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
    fourth->Next = NULL;

    cout<< endl << "Original Linked List Traversal Output" << endl;
    linked_list_traversal(head);

    // Insert at First
    // head = insertAtFirst(head, 7);      cout<< endl;
    // linked_list_traversal(head);

    
    // Insert in Between at a particular index
    // cout<< endl << "After Insertion in Between the Linked List." << endl;
    // head = insert_in_between(head, 21, 2);   
    // linked_list_traversal(head);

    // Insert at End of the Linked List
    // cout << endl << "Insert at End of the Linked List."<< endl ;
    // head = insert_at_end(head, 70);
    // linked_list_traversal(head);
    
    
    // Insert After a given Node of the Linked List
    cout << endl << "Insert After a given Node of the Linked List."<< endl ;
    head = insert_after_a_node(head, second, 700);
    linked_list_traversal(head);

    return 0;
}