#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int size;
    cout<< "Enter the Size of the Array : ";
    cin>> size;

    for(int i = 0; i<size; i++){
        cin>> arr[i];
    }

    int odd[5], even[5];
    int o = 0 , e = 0;

    for(int i=0; i<5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[e] = arr[i];
            e++;
        }
        else{
            odd[o] = arr[i];
            o++;
        }
    }

    cout<< "\nActual Array : [ ";
    for(int i=0; i<size; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< " ]\n\n";

    cout<< "\nEven Array : [ ";
    for(int i=0; i<e; i++)
    {
        cout<< even[i] << " ";
    }
    cout<< " ] \n\n";

    cout<< "\n\n Odd Array : [ ";
    for(int i= 0; i<o; i++)
    {
        cout<< odd[i] << " ";
    }
    cout<< " ] \n\n";



    return 0;
}