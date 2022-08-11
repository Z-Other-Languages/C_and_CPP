#include <iostream>
using namespace std;

int main()
{
    int arr[4];

    arr[0] = 12;
    arr[1] = 24;

    cout << arr; // 🟢 this will print base address of the array

    // You can also intialize the array using curley braces;
    int num[5] = {1, 2, 3, 4, 5};
}