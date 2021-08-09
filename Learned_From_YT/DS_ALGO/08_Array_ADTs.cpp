#include<iostream>
#include<stdlib.h>
using namespace std;

struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tsize, int usize)
{
    // (*a).total_size = tsize;
    // (*a).used_size = usize;
    // (*a).ptr = (int *)malloc(tsize * sizeof(int));

    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));

}

void show(struct myArray *a){
    for (int i=0; i < a->used_size; i++)
    {
        cout<< (a->ptr)[i] << " " ;
    }
}

void setVal(struct myArray *a )
{
    for(int i=0; i < a->used_size; i++){
        cout<< "Enter " << i << " Element : " ;
        int n;
        cin >> n;
        (a->ptr)[i] = n;
    }
};

int main(){
    struct myArray marks;
    createArray(&marks, 100, 3);
    setVal(&marks);
    show(&marks);

    return 0;
}