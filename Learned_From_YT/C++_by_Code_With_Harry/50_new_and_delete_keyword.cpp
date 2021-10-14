/*  new and delete keyword

    Here * means dereferencing the pointer address, so finally after dereferencing it gives value.

    ✨ new operator :- The new operator denotes a request for memory allocation on the free store.

    🟢 If sufficient memory is available, new operator initializes the memory and returns the   address of the newly allocated and initialized memory to the pointer variable.

    💊 Syntax to use new Operator :
        To allocate the memory of any data type, the syntax is 👇

        pointer-variable = new data-type;



*/
#include <iostream>
using namespace std;

int main()
{
    int a = 44;
    int* ptr = &a;
    cout<< "Address of a : " << ptr << endl;
    cout<< "Value of a : " << *ptr << endl;
    
    int *q = new int(56);
    cout<< "Value of q : " << *q << endl;

    float *p = new float(99);
    cout<< "Value of p : " << *p << endl;

    int *arr = new int[4];
    arr[0] = 18;
    arr[1] = 28;
    arr[2] = 38;
    arr[3] = 58;

    // delete[] arr;
    

    for (int i=0; i<sizeof(arr); i++)
    {
    cout<< "Value of arr "<< i << " : " << *(arr+i) << endl;
    }

    return 0;
}