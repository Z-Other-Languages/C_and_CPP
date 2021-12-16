// Insertion in array

#include <iostream>
using namespace std;

class Array_Operation
{
public:
    int arr[100];  // Extra Lage Size Array
    int size;      // Number of initial default size of Array to take INPUT
    int pos;       // The position at which new insertion  is to be done
    int new_value; // New value to be inserted at position pos
    int del_value;

    void take_input();
    void traverse();
    void swap(int *);
    void insertion();
    void deletion();

    void menu_based();
};

void Array_Operation ::take_input()
{
    cout << "\n\nEnter the Size of the Array : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    traverse();
}

void Array_Operation ::traverse()
{
    cout << endl
         << "[ ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " ]";
}

void Array_Operation ::insertion()
{
    cout << "\n\n At what position you want to make entry : ";
    cin >> pos;
    cout << "\n\nEnter the Value to be Inserted : ";
    cin >> new_value;
    swap(&pos);

    traverse();
}

void Array_Operation ::swap(int *pos)
{
    // cout << *pos;

    for (int i = (size); i >= (*pos); i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[*pos - 1] = new_value;
    size++;
}

void Array_Operation ::deletion()
{
    cout<< "\nEnter the Value to Delete from Array : ";
    cin>> del_value;
    
    int i;
    for(i=0; i< size; i++)
    {
        if(del_value == arr[i])
        {
            break;
        }
    }
    cout<< endl <<  i << endl;

    for(int j = i; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;

    traverse();

}

void Array_Operation ::menu_based()
{
    label:

    cout << "\n\nSelect one of the Option : ";
    cout << "\n1. Insertion 2. Deletion \n3. Traverse \n4. Exit";

    cout << endl
         << endl;
    int e;
    cout<< "Press Any Key ...  ";
    cin >> e;

    switch (e)
    {
    case 1:        
        insertion();
        goto label;

    case 2:
        deletion();
        goto label;

    case 3:
        traverse();
        goto label;

    case 4:
        exit(0);

    default:
        cout << "Enter the Correct Option" << endl;
        goto label;
    }
}

void driver_program()
{
    Array_Operation obj;
    obj.take_input();
    
    // obj.insertion();

    obj.menu_based();
}

int main()
{
    driver_program();

    Array_Operation obj;

    // obj.insertion();

    return 0;
}