#include<iostream>
using namespace std;

void get_size()
{
    int r, c;
    cin>> r >> c;

    int **arr = new int*[r];

    for(int i =0; i<r; i++)
    {
        arr[i] = new int[c];
    }
}

int main(){
    get_size();

    return 0;
}