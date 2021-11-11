/*
2.	Write a menu based program to perform the following operations on one dimensional array: 
(i)     Insert      // Inserting a new element in the existing array
(ii)	Delete      // 
(iii)	Traverse 
(iv)	Merge

*/

#include<iostream>
using namespace std;

class Operation{
    public:
        int index=0;
        int arr[5], ins_Element=0, ins_pos=0, del_pos, del_element;

        Operation()
        {
            for(int i=0; i<5; i++)  // Initialising the array with zeros
            {
                arr[i] = 0;
            }

            // Take Basics Input in the array
            for(int i=0; i<5; i++)
            {
                cout<< "ELEMENTS ELEMENT AT POSITION " << i+1 << " : ";
                cin>> arr[i];
            }
        }

    void insert();
    
    void deletion();

    void traverse();

};

void Operation :: insert()
{
        cout<< "Enter the elements that is to be inserted : ";
        cin>> ins_Element;
        cout<< "Enter the Position where to Insert : ";
        cin>> ins_pos;
        
        arr[ins_pos - 1] = ins_Element;
}

void Operation :: traverse()
{
    cout<< "[";
    for(int i=0; i < 5; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< "]";
    
}

void Operation :: deletion()
{
    cout<< "Enter the Element i.e, to be deleted : ";
    cin >> del_element;
    for(int i=0; i<5; i++)
    {
        if(del_element == arr[i])
        {
            arr[i] = 0;
        }
    }
}

int main()
{
    Operation obj;

    label:      // goto label is called here again

    cout<< "\n\nPerform Operation on the 1-d array : ";
    obj.traverse();

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
            cout<< "\nInsertion Operation on the Array : \n";
            obj.insert();
            obj.traverse();
            goto label;

        case 2:
            cout<< "\nDeletion Operation on the Array\n";
            obj.deletion();
            goto label;

        case 3:
            cout<< "\nTraversed Element is : ";
            obj.traverse();
            goto label;
            

        default:
            cout<< "\n\nPlease Enter a Correct Option\n";
            goto label;
        
    }

    // Operation on Array .👇👇
    // const int size = 4;
    // int arr[size];

    // cout<< arr[0];

    return 0;
}