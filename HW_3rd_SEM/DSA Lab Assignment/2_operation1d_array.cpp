/*
2.	Write a menu based program to perform the following operations on one dimensional array: 
(i)	Insert   
(ii)	Delete 
(iii)	Traverse 
(iv)	Merge

*/

#include<iostream>
using namespace std;

class Operation{
    public:
        int index=0;
        int arr[4];

    void insert();

    void traverse();

};

void Operation :: insert()
{
    // for(int i=0; i<4; i++)
        cin>> arr[index];
        index++;
}

void Operation :: traverse()
{
    for(int i=0; i<= index; i++)
    {
        cout<< arr[index];
    }
}


int main()
{
    Operation obj;

    cout<< "\n\nPerform Operation on the 1-d array : ";

    label:      // goto label is called here again

    cout<< "\n1. Insert \n2. Delete \n3. Traverse \n4. Merge \n0. Press Zero to Exit. \n";
    cout<< "\nSelect One of the Options : ";
    int e;
    cin>> e;

    switch(e)
    {
        case 0:
            cout<< "\n\nYour Program Exited Successfully.\n\n";
            break;

        case 1:
            cout<< "\nInsertion Operation on the Array : ";
            obj.insert();
            goto label;

        case 2:
            cout<< "\nDeletion Operation on the Array";
            obj.traverse();
            goto label;

        default:
            cout<< "\n\nPlease Enter a Correct Option\n";
            goto label;
        
    }

    // Operation on Array .👇👇
    const int size = 4;
    int arr[size];

    cout<< arr[0];

    return 0;
}