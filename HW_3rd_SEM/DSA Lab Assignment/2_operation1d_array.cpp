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
        int new_size=0;   // new size of merging array
        int *arr_new;

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

    void merge();

};

void Operation :: insert()
{
        cout<< "Enter the elements that is to be inserted : ";
        cin>> ins_Element;
        cout<< "Enter the Position where to Insert : ";
        cin>> ins_pos;
        
        if(ins_pos >=0 || ins_pos <= 5)
            arr[ins_pos - 1] = ins_Element;
        else
            arr_new[ins_pos - 6] = ins_Element; ❌❌ Not WOrking

        
}

void Operation :: traverse()
{
    cout<< "[";
    for(int i=0; i < 5; i++)
    {
        if(arr[i] == 0)
        {
            cout<< "_ ";
        }
        else
            cout<< arr[i] << " ";
    }

    if(new_size != 0)
    {
        for(int i=0; i<new_size; i++)
        {
            if(arr_new[i] == 0)
                cout<< "_ ";

            else{
                cout<< arr_new[i] << " ";                 
            }
        }
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
    
    for(int i=0; i<new_size; i++)
    {
        if(del_element == arr_new[i])
            arr_new[i] = 0;
    }
}

void Operation :: merge()
{

    cout<< "Enter the size of the New Array : ";
    cin >> new_size;
    arr_new = new int[new_size];

    for(int i=0; i<new_size; i++)
    {
        cout<< "Enter Element at Position " << i+ 6 << " : ";
        cin>> arr_new[i];
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

        case 4:
            cout<< "\nMerging Element ... \n";
            obj.merge();
            goto label;
            

        default:
            cout<< "\n\nPlease Enter a Correct Option !!!...\n";
            goto label;
        
    }

    // Operation on Array .👇👇
    // const int size = 4;
    // int arr[size];

    // cout<< arr[0];

    return 0;
}