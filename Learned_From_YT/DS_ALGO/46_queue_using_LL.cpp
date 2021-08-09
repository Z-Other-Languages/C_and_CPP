// Implementing Queue Using Linked List
#include<iostream>
#include<stdlib.h>
using namespace std;

// create Global Variable
struct Node *f = NULL;
struct Node *r = NULL;
// if you don't use global variable then you have to use **ptr everywhere which you don't want.

struct Node
{
    int data;
    struct Node *next;
};

void linked_list_traversal(struct Node *ptr)
{
    cout<< "Printing Elements of the Linked List : " << endl;
    while(ptr != NULL)
    {
        cout<< "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

void enqueue(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if(n == NULL)
    {
        cout<< "This Queue is Empty." << endl;
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if(f == NULL)
        {
            f = r = n;
        }
        else{
            r->next = n;    //  linking previous end node 'r' to the NEW End Node 'n';
            r = n;          //  new final value of 'r' is equal to new 'n'
        }
    }

}

int dequeue(){
    int val = -1;
    struct Node *ptr = f;
    if(f == NULL)
    {
        cout<< "Error! Queue is Empty." << endl;
    }
    else
    {
        f = f->next;    // new intial node 'f' got the value of f->next
        val = ptr->data;    // storing value of the node which is getting deleted
        free(ptr);          // deallocating memory spaces for the deleted Node

        cout << "Dequed Element : " << val << endl;
    }
    return val;
}

int main(){
    enqueue(45);
    enqueue(7);
    enqueue(49);
    enqueue(43);

    linked_list_traversal(f);

    dequeue();  // In queue, First In First Out
    dequeue();

    return 0;
}