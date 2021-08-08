#include <iostream>
using namespace std;

void pointer()
{
    int marks[5];
    for (int i=0; i<5; i++)
    {
        cin>> marks[i];
        cout<< marks[i] << " ";
    }
    cout<< endl << endl;

    int* p = marks;
    for (int i=0; i<5; i++)
        cout<< *(p+i) << endl;
    cout<< *p << endl;
    cout<< *(p+1) << endl;
    
}

int main()
{
    // Pointer : A data type which holds the address of the other data type
    
    pointer();

    int a=3;
    int* b = &a;

    cout<< "The adress of a is : " << &a <<endl;
    cout<< "The adress of a is : " << b <<endl;
    cout<< "The adress of a is : " << b <<endl;

    cout<< "The Value at address of a is : " << *b << endl;

    int** c= &b;

    cout<< "The adress of b is : " << &b <<endl;
    cout<< "The adress of c is : " << c <<endl;
    cout<< "The adress of c is : " << *c <<endl;
    cout<< "The adress of c is : " << **c <<endl;


}